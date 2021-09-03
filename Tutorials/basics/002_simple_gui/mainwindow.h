#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT // This macro tells QT that we are going to use the kind of GUI app with signals slots etc

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_closeButton_clicked();

    void on_closeButton_pressed();

private:
    Ui::MainWindow *ui; //This object will help us access all the widgets we are going to add.
};

#endif // MAINWINDOW_H
