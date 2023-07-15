/********************************************************************************
** Form generated from reading UI file 'auxelite.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUXELITE_H
#define UI_AUXELITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuxElite
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AuxElite)
    {
        if (AuxElite->objectName().isEmpty())
            AuxElite->setObjectName("AuxElite");
        AuxElite->resize(800, 600);
        centralwidget = new QWidget(AuxElite);
        centralwidget->setObjectName("centralwidget");
        AuxElite->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AuxElite);
        menubar->setObjectName("menubar");
        AuxElite->setMenuBar(menubar);
        statusbar = new QStatusBar(AuxElite);
        statusbar->setObjectName("statusbar");
        AuxElite->setStatusBar(statusbar);

        retranslateUi(AuxElite);

        QMetaObject::connectSlotsByName(AuxElite);
    } // setupUi

    void retranslateUi(QMainWindow *AuxElite)
    {
        AuxElite->setWindowTitle(QCoreApplication::translate("AuxElite", "AuxElite", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuxElite: public Ui_AuxElite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUXELITE_H
