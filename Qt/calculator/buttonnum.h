#ifndef BUTTONNUM_H
#define BUTTONNUM_H
#include<QPushButton>
#include<QLineEdit>
#include<QString>
#include<QObject>
#include<QDebug>
#include"calculator.h"
class ButtonNum : public QPushButton
{
    Q_OBJECT
public:
    ButtonNum(int i);
public:
    int index;
    QLineEdit* le;
private slots:
    void clickButton();
    void clicktestButton();
};

#endif // BUTTONNUM_H
