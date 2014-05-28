#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <log.h>
#include <util.h>
#include <viewer.h>
#include <wizard.h>

#if defined(_WIN32) || defined(_WIN64)
    #include <direct.h>
    #define chdir _chdir
#else
#include <unistd.h>
#endif

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    enabled(true),
    worker(),
    wizard(NULL),
    platesViewer(NULL)
{
    workingDirectory = "";
    ui->setupUi(this);
    setWindowTitle("Plater");
    setWindowIcon(QIcon("img/plater.png"));

    about = new About;

    connect(&worker, SIGNAL(workerEnd()), this, SLOT(on_worker_end()));
    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(on_about()));
}

MainWindow::~MainWindow()
{
    if (wizard != NULL) {
        delete wizard;
    }
    if (platesViewer != NULL) {
        delete platesViewer;
    }
    delete about;
    delete ui;
}

void MainWindow::enableAll(bool enable)
{
    enabled = enable;
    ui->parts->setEnabled(enable);
    ui->outputDirectory->setEnabled(enable);
    ui->outputDirectoryButton->setEnabled(enable);
    ui->plateHeight->setEnabled(enable);
    ui->plateWidth->setEnabled(enable);
    ui->stlRadio->setEnabled(enable);
    ui->ppmRadio->setEnabled(enable);
    ui->precision->setEnabled(enable);
    ui->spacing->setEnabled(enable);
    ui->bruteForceSpacing->setEnabled(enable);
    ui->bruteForceAngle->setEnabled(enable);
    ui->randomIterations->setEnabled(enable);

    if (enable) {
        ui->runButton->setText("Run");
    } else {
        ui->runButton->setText("Cancel");
    }
}

void MainWindow::showError(string error)
{
    error = "<font color=\"red\">" + error + "</font";
    ui->errorMessage->setText(QString::fromStdString(error));
}

void MainWindow::showSuccess(string success)
{
    success = "<font color=\"green\"> " + success + "</font";
    ui->errorMessage->setText(QString::fromStdString(success));
}

void MainWindow::wizardNext()
{
    if (stls.size() == 0) {
        return;
    }
    QString stl = stls.last();
    stls.pop_back();

    if (stl != "") {
        if (wizard != NULL) {
            wizard->close();
            delete wizard;
        }

        wizard = new Wizard(stl);
        connect(wizard, SIGNAL(accepted()), this, SLOT(on_wizard_accept()));
        wizard->show();
        wizard->setPlateDimension(getPlateWidth(), getPlateHeight());
    }
}

float MainWindow::getPlateWidth()
{
    return ui->plateWidth->text().toFloat();
}

float MainWindow::getPlateHeight()
{
    return ui->plateHeight->text().toFloat();
}

void MainWindow::on_outputDirectoryButton_clicked()
{
    ui->outputDirectory->setText(QFileDialog::getExistingDirectory());
}

void MainWindow::on_runButton_clicked()
{
    if (enabled) {
        enableAll(false);
        increaseVerboseLevel();
        worker.request.setPlateSize(getPlateWidth(), getPlateHeight());
        worker.request.pattern = ui->outputDirectory->text().toStdString() + "/plate_%03d";
        worker.request.spacing = ui->spacing->text().toFloat()*1000;
        worker.request.precision = ui->precision->text().toFloat()*1000;
        worker.request.randomIterations = ui->randomIterations->text().toInt();
        worker.request.delta = ui->bruteForceSpacing->text().toFloat()*1000;
        worker.request.deltaR = DEG2RAD(ui->bruteForceAngle->text().toFloat());
        worker.parts = ui->parts->toPlainText().toStdString();
        if (ui->ppmRadio->isChecked()) {
            worker.request.mode = REQUEST_PPM;
        } else {
            worker.request.mode = REQUEST_STL;
        }

        showSuccess("Working...");
        worker.start();
    } else {
        worker.request.cancel = true;
    }
}

void MainWindow::on_partBrowse_clicked()
{
    stls = QFileDialog::getOpenFileNames(this, "Select a part", workingDirectory, "*.stl");
    wizardNext();
}

void MainWindow::on_worker_end()
{
    if (worker.request.hasError) {
        showError(worker.request.error);
    } else {
        if (worker.request.cancel) {
            showSuccess("Generation cancelled");
        } else {
            ostringstream oss;
            oss << "Generation over, generated " << worker.request.plates << " plates.";
            showSuccess(oss.str());

            if (ui->viewAfter->isChecked()) {
                if (platesViewer != NULL) {
                    platesViewer->close();
                    delete platesViewer;
                }
                platesViewer = new PlatesViewer();
                platesViewer->setPlateDimension(getPlateWidth(), getPlateHeight());
                platesViewer->setPlates(worker.request.generatedFiles);
                platesViewer->show();
            }
        }
    }
    enableAll(true);
}

void MainWindow::on_about()
{
    about->show();
}

void MainWindow::on_wizard_accept()
{
    QString parts = ui->parts->toPlainText();
    wizard->close();
    QString part = wizard->getPartFilename();
    QString partOptions = wizard->getPartOptions();
    string directory = getDirectory(part.toStdString());

    if (parts.trimmed() == "") {
        workingDirectory = QString::fromStdString(directory);
        chdir(directory.c_str());
    }
    if (directory == workingDirectory.toStdString()) {
        part = QString::fromStdString(getBasename(part.toStdString()));
    }

    parts += part + " " + partOptions + "\n";
    ui->parts->setText(parts);

    wizardNext();
}

void MainWindow::on_saveButton_clicked()
{
    QString filename = QFileDialog::getSaveFileName(this, "Select where to save plater.conf", workingDirectory + "/plater.conf");
    QString configuration = ui->parts->toPlainText();

    QFile conf(filename);
    conf.open(QIODevice::WriteOnly);
    conf.write(configuration.toStdString().c_str());
    conf.close();
}

void MainWindow::on_openButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Select a plater.conf", workingDirectory);

    QFile conf(filename);
    conf.open(QIODevice::ReadOnly);
    ui->parts->setText(conf.readAll());
    conf.close();

    workingDirectory = QString::fromStdString(getDirectory(filename.toStdString()));
    chdir(workingDirectory.toStdString().c_str());
}

void MainWindow::on_clearButton_clicked()
{
    ui->parts->setText("");
}
