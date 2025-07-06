#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QDialog>
#include<QPushButton>
#include<QLineEdit>
#include<QString>
#include"buttonnum.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class calculator;
}
QT_END_NAMESPACE
class ButtonNum;
class calculator : public QDialog
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();
    ButtonNum* button_num[10];
    QPushButton* button_plus;
    QPushButton* button_minus;
    QPushButton* button_multiply;
    QPushButton* button_devide;
    QPushButton* button_equal;
    QPushButton* button_clearAll;
    QLineEdit* lineEdit;
    static float num1,num2,result;
    static QString S;
    static char sign;
    static int mark;
private slots:
    void on_button_plus_clicked();
    void on_button_minus_clicked();
    void on_button_multiply_clicked();
    void on_button_devide_clicked();
    void on_button_equal_clicked();
    void on_button_clearAll_clicked();
};
#endif // CALCULATOR_H
