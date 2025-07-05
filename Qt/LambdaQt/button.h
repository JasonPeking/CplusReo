#ifndef BUTTON_H
#define BUTTON_H

#include <QWidget>
#include<QPushButton>
QT_BEGIN_NAMESPACE
namespace Ui {
class button;
}
QT_END_NAMESPACE

class button : public QWidget
{
    Q_OBJECT

public:
    button(QWidget *parent = nullptr);
    ~button();

private:
    Ui::button *ui;
    QPushButton *button1;
};
#endif // BUTTON_H
