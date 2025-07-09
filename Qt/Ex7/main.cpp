#include <QApplication>
#include<QFile>
#include<QDebug>
#include<QDataStream>
#include<QString>
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QFile file("D:/main.cpp");
    if(!file.open(QFile::WriteOnly|QIODevice::Truncate)){
        qDebug()<<"Open file failed.";
        return -1;
    }
    else{
        QDataStream out(&file);
        out<<QString("Hello World2")<<qint32(1);
        qDebug()<<"write successfully";
        file.close();
    }
    return 0;
}
