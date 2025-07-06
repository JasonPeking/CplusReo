#include "calculator.h"
#include<QGridLayout>
#include"buttonnum.h"
calculator::calculator(QWidget* parent)
    :QDialog(parent){
    num1=0.0;
    num2=0.0;
    result=0.0;
    S="";
    mark=1;
    button_plus=new QPushButton("+");
    button_minus=new QPushButton("-");
    button_multiply=new QPushButton("*");
    button_devide=new QPushButton("/");
    button_equal=new QPushButton("=");
    button_clearAll=new QPushButton("c");
    lineEdit=new QLineEdit("C");
    for(int i=0;i<10;i++){
        button_num[i]=new ButtonNum(i);
        button_num[i]->le=lineEdit;
    }
    QGridLayout* Grid=new QGridLayout;
    Grid->addWidget(lineEdit,1,1,1,4,Qt::Alignment());
    for(int i=2;i<=5;i++){
        for(int j=1;j<=4;j++){
            Grid->addWidget((QPushButton*)button_num[(i-2)*4+j-1],i,j,Qt::Alignment());
        }
    }
    this->setLayout(Grid);
    for(int i=0;i<10;i++){
        connect(button_num[i],SIGNAL(clicked()),button_num[i],SLOT(clickButton()));
    }
    connect(button_plus,SIGNAL(clicked(bool)),this,SLOT(on_button_plus_clicked()));
    connect(button_minus,SIGNAL(clicked(bool)),this,SLOT(on_button_minus_clicked()));
    connect(button_multiply,SIGNAL(clicked(bool)),this,SLOT(on_button_multiply_clicked()));
    connect(button_devide,SIGNAL(clicked(bool)),this,SLOT(on_button_devide_clicked()));
    connect(button_equal,SIGNAL(clicked(bool)),this,SLOT(on_button_equal_clicked()));
    connect(button_clearAll,SIGNAL(clicked(bool)),this,SLOT(on_button_clearAll_clicked()));
}

    void calculator::on_button_plus_clicked(){
        S+="+";
        sign='+';
        mark=2;
        lineEdit->setText(S);
    }

    void calculator::on_button_minus_clicked(){
        S+="-";
        sign='-';
        mark=2;
        lineEdit->setText(S);
    }

    void calculator::on_button_multiply_clicked(){
        S+="*";
        sign='*';
        mark=2;
        lineEdit->setText(S);
    }

    void calculator::on_button_devide_clicked(){
        S+="/";
        sign='/';
        mark=2;
        lineEdit->setText(S);
    }

    void calculator::on_button_equal_clicked(){
        S+="=";
        switch(sign){
        case'+':
            result=num1+num2;
            break;
        case'-':
            result=num1-num2;
            break;
        case'*':
            result=num1*num2;
            break;
        case'/':
            result=num1/num2;
            break;
        default:
            break;
        }
        S+=QString("%1").arg(result);
        lineEdit->setText(S);
    }
    void calculator::on_button_clearAll_clicked(){
        S="";
        lineEdit->setText(S);
        mark=1;
        num1=0.0;
        num2=0.0;
        result=0.0;
    }
    calculator::~calculator() {
    }
