#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Method to manually connect items
    // connect(sender, signal, recivever, slot)
    // Sender sends the signal
    // Reveiver recieves the signal and stores in a slot
    connect(ui->ownVerticalSlider, SIGNAL(valueChanged(int)), ui->ownProgressBar, SLOT(setValue(int)));

    //Just like connect we have disconnect
    //These are helpful if you add enable button
    disconnect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
