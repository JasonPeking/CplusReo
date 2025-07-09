#include<QApplication>
#include<QFile>
#include<QDebug>
#include<QTextStream>
#include<QString>
int main(int argc,char* argv[]){
    QFile file("D:/main.cpp");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text)){
        qDebug()<<"Open file failed.";
        return -1;
    }
    else{
        QTextStream in(&file);
        QString str;
        while(!in.atEnd()){
            in>>str;
            qDebug()<<str;
        }
    }
    return 0;
}
