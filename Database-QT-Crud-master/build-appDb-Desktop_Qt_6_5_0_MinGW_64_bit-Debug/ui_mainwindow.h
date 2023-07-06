/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *insertButton;
    QPushButton *UpdateButton;
    QPushButton *DeleteButton;
    QPushButton *DeleteAllButton;
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(523, 379);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        insertButton = new QPushButton(centralWidget);
        insertButton->setObjectName("insertButton");
        insertButton->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI Variable\";\n"
""));

        verticalLayout->addWidget(insertButton);

        UpdateButton = new QPushButton(centralWidget);
        UpdateButton->setObjectName("UpdateButton");
        UpdateButton->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI Variable\";\n"
""));

        verticalLayout->addWidget(UpdateButton);

        DeleteButton = new QPushButton(centralWidget);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI Variable\";\n"
""));

        verticalLayout->addWidget(DeleteButton);

        DeleteAllButton = new QPushButton(centralWidget);
        DeleteAllButton->setObjectName("DeleteAllButton");
        DeleteAllButton->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI Variable\";\n"
""));

        verticalLayout->addWidget(DeleteAllButton);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI Variable\";\n"
""));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 1, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Light\";\n"
"color:black;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        insertButton->setText(QCoreApplication::translate("MainWindow", "Add Admin", nullptr));
        UpdateButton->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        DeleteButton->setText(QCoreApplication::translate("MainWindow", "Delete User", nullptr));
        DeleteAllButton->setText(QCoreApplication::translate("MainWindow", "Delete ALL", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Change Setup Admin Credential", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
