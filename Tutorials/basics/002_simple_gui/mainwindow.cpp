#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_closeButton_clicked()
{

    ui->status->setText("Closing the window");

}

void MainWindow::on_closeButton_pressed()
{
    ui->status->setText("You have pressed close button");
}
