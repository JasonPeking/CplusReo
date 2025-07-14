#ifndef QLABEL_H
#define QLABEL_H

#include <QLabel>
#include<QMouseEvent>
namespace Ui {
class EventLabel;
}
class Ui::EventLabel : public QLabel
{
protected:
    void mouseMovement(QMouseEvent *event);
    void mousePressment(QMouseEvent *event);
    void mouseRealseEvent(QMousement *event);
};
#endif // QLABEL_H
