#include "calculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //I need to organize the files.
    QApplication a(argc, argv);
    calculator w;
    w.show();
    return a.exec();
}
