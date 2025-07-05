#include "newspaper.h"
#include"reader.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Newspaper newspaper("Newspaper A");
    reader reader1;
    QObject::connect(&newspaper,&Newspaper::newPaper,&reader1,&reader::receiveNews);
    newspaper.sent();
    return a.exec();
}
