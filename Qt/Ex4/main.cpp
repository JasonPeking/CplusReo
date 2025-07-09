#include<QFile>
#include<QDebug>
#include<QFileDialog>
#include<QFileInfo>
#include <QApplication>

int main(int argc, char *argv[])
{
    QFile file("D:/main.cpp");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text)){
        qDebug()<<"Open file failed.";
        return -1;
    }
    else{
        while(!file.atEnd()){
            qDebug()<<file.readLine();
        }
    }
    QFileInfo info(file);
    qDebug()<<info.isDir();
    qDebug()<<info.isExecutable();
    qDebug()<<info.baseName();
    qDebug()<<info.completeBaseName();
    qDebug()<<info.suffix();
    qDebug()<<info.completeSuffix();
    return 0;
}
