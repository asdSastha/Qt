#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // Beginning of GUI
    MainWindow w;
    w.show();


    return a.exec(); // End of GUI
}
