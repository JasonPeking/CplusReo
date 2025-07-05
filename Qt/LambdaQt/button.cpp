#include "button.h"
#include "ui_button.h"
#include<QDebug>
button::button(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::button)
{
    button1=new QPushButton(this);
    button1->setParent(this);
    button1->setText("Lambda");
    connect(button1,&QPushButton::released,
            [=](){
                button1->setText("hello");
    });
}

button::~button()
{
    delete ui;
}
