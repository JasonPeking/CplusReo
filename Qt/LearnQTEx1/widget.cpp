#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    button1.setParent(this);
    button1.setText("close");
    button1.move(100,100);
    connect(&button1,&QPushButton::pressed,this,&QWidget::close);
}
Widget::~Widget()
{
    delete ui;
}
