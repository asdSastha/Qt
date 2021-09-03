
//The main application
#include <QApplication>

#include <QLabel>
#include <QWidget>
int main(int argc, char *argv[])
{
    // The Q application object
    QApplication app(argc, argv);
    // Anything between creation and execution of app
    // object is the app in building.

    QLabel *label = new QLabel("Hello Workd"); // This provides text on the widget
    label->setWindowTitle("My Qt App");
    label->resize(640,480);
    label->show();



    return app.exec(); //Return the execution status
}
