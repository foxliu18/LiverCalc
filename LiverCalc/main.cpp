#include "LiverCalc.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LiverCalc w;
    w.show();
    return a.exec();
}
