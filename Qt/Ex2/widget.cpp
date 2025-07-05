#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    button1.setParent(this);
    button1.setText("hello");
    button1.move(100,100);
    connect(&button1,&QPushButton::pressed,this,&Widget::MySlot);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::MySlot(){
    button1.setText("hi");
}
