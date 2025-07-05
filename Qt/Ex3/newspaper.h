#ifndef NEWSPAPER_H
#define NEWSPAPER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Newspaper;
}
QT_END_NAMESPACE

class Newspaper : public QMainWindow
{
    Q_OBJECT

public:
    Newspaper(const QString name):m_name(name){};
    void sent();
    ~Newspaper();
signals:
    void newPaper(const QString &name);
private:
    Ui::Newspaper *ui;
    QString m_name;
};
#endif // NEWSPAPER_H
