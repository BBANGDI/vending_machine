/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLCDNumber *lcdNumber;
    QPushButton *PB10;
    QPushButton *PB100;
    QPushButton *PB50;
    QPushButton *PB500;
    QPushButton *PBCoffee;
    QPushButton *PBMilk;
    QPushButton *PBTea;
    QPushButton *PBReturn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 63, 20));
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 10, 381, 81));
        PB10 = new QPushButton(Widget);
        PB10->setObjectName(QString::fromUtf8("PB10"));
        PB10->setGeometry(QRect(20, 110, 84, 28));
        PB100 = new QPushButton(Widget);
        PB100->setObjectName(QString::fromUtf8("PB100"));
        PB100->setGeometry(QRect(20, 190, 84, 28));
        PB50 = new QPushButton(Widget);
        PB50->setObjectName(QString::fromUtf8("PB50"));
        PB50->setGeometry(QRect(20, 150, 84, 28));
        PB500 = new QPushButton(Widget);
        PB500->setObjectName(QString::fromUtf8("PB500"));
        PB500->setGeometry(QRect(20, 230, 84, 28));
        PBCoffee = new QPushButton(Widget);
        PBCoffee->setObjectName(QString::fromUtf8("PBCoffee"));
        PBCoffee->setGeometry(QRect(280, 110, 84, 28));
        PBMilk = new QPushButton(Widget);
        PBMilk->setObjectName(QString::fromUtf8("PBMilk"));
        PBMilk->setGeometry(QRect(280, 160, 84, 28));
        PBTea = new QPushButton(Widget);
        PBTea->setObjectName(QString::fromUtf8("PBTea"));
        PBTea->setGeometry(QRect(280, 210, 84, 28));
        PBReturn = new QPushButton(Widget);
        PBReturn->setObjectName(QString::fromUtf8("PBReturn"));
        PBReturn->setGeometry(QRect(230, 250, 161, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "gilgil", nullptr));
        PB10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        PB100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        PB50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        PB500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        PBCoffee->setText(QCoreApplication::translate("Widget", "coffee(100)", nullptr));
        PBMilk->setText(QCoreApplication::translate("Widget", "milk(200)", nullptr));
        PBTea->setText(QCoreApplication::translate("Widget", "tea(300)", nullptr));
        PBReturn->setText(QCoreApplication::translate("Widget", "Return coin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
