/********************************************************************************
** Form generated from reading UI file 'newspaper.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSPAPER_H
#define UI_NEWSPAPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Newspaper
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Newspaper)
    {
        if (Newspaper->objectName().isEmpty())
            Newspaper->setObjectName("Newspaper");
        Newspaper->resize(800, 600);
        centralwidget = new QWidget(Newspaper);
        centralwidget->setObjectName("centralwidget");
        Newspaper->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Newspaper);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Newspaper->setMenuBar(menubar);
        statusbar = new QStatusBar(Newspaper);
        statusbar->setObjectName("statusbar");
        Newspaper->setStatusBar(statusbar);

        retranslateUi(Newspaper);

        QMetaObject::connectSlotsByName(Newspaper);
    } // setupUi

    void retranslateUi(QMainWindow *Newspaper)
    {
        Newspaper->setWindowTitle(QCoreApplication::translate("Newspaper", "Newspaper", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Newspaper: public Ui_Newspaper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSPAPER_H
