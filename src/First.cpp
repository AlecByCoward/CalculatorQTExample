#include <QApplication>
#include <QMainWindow>
#include "calcfunc.h"
#include "./ui_calcmainwindow.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    CalcFunc window;
    Ui::MainWindow calc; 

    calc.setupUi(&window);
    window.NewResult = calc.NewResult; 
    window.OldResult = calc.OldResult; 
    //Button *button = new Button(this);

    window.show();
    return app.exec();
}
 