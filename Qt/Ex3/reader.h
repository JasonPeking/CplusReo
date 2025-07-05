#ifndef READER_H
#define READER_H

#include <QWidget>

class reader : public QWidget
{
    Q_OBJECT
public:
    reader(){};
    void receiveNews(const QString &name);
signals:
};

#endif // READER_H
