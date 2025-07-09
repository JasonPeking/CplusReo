#include <QApplication>
#include<QFile>
#include<QDebug>
#include<QDataStream>
#include<QString>
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QFile file("D:/main.cpp");
    if(!file.open(QFile::ReadOnly)){
        qDebug()<<"Open file failed.";
        return -1;
    }
    else{
        QDataStream in(&file);
        QString str;
        qint32 i;
        in>>str>>i;
        qDebug()<<str<<i;
        file.close();
    }
    return 0;
}
