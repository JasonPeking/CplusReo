#include<QApplication>
#include<QFile>
#include<QDebug>
#include<QTextStream>
#include<QString>
int main(int argc,char* argv[]){
    QFile file("D:/main.cpp");
    if(!file.open(QFile::WriteOnly|QIODevice::Truncate)){
        qDebug()<<"Open file failed.";
        return -1;
    }
    else{
        QTextStream out(&file);
        out<<"Hello world";
    }
    file.close();
    return 0;
}
