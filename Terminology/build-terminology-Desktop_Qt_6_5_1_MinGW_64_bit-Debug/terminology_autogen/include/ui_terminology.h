/********************************************************************************
** Form generated from reading UI file 'terminology.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMINOLOGY_H
#define UI_TERMINOLOGY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Terminology
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *Apply;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_5;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_8;
    QComboBox *comboBox_7;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *Aux_lineEdit;
    QLineEdit *Aux2_lineEdit;
    QLineEdit *User_lineEdit;
    QLineEdit *job_lineEdit;
    QLineEdit *item_lineEdit;
    QLineEdit *machine_lineEdit;
    QLineEdit *rework_lineEdit;
    QLineEdit *scrap_lineEdit;
    QVBoxLayout *verticalLayout;
    QLabel *Aux_label;
    QLabel *Aux2;
    QLabel *User;
    QLabel *Job;
    QLabel *Item;
    QLabel *Machine;
    QLabel *Rework;
    QLabel *Scrap;
    QHBoxLayout *horizontalLayout;
    QLabel *label_13;
    QLineEdit *lineEdit1;
    QLineEdit *secondLineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Terminology)
    {
        if (Terminology->objectName().isEmpty())
            Terminology->setObjectName("Terminology");
        Terminology->resize(461, 419);
        centralwidget = new QWidget(Terminology);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 0, 109, 27));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"Segoe UI Variable Display\";\n"
"color:black;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(9, 42, 121, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 40, 191, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));
        Apply = new QPushButton(centralwidget);
        Apply->setObjectName("Apply");
        Apply->setGeometry(QRect(190, 350, 95, 28));
        Apply->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 30, 491, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 60, 491, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(340, 40, 171, 20));
        label_5->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 70, 361, 281));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout_2->addWidget(comboBox);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        verticalLayout_2->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(layoutWidget);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");

        verticalLayout_2->addWidget(comboBox_3);

        comboBox_4 = new QComboBox(layoutWidget);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");

        verticalLayout_2->addWidget(comboBox_4);

        comboBox_5 = new QComboBox(layoutWidget);
        comboBox_5->setObjectName("comboBox_5");

        verticalLayout_2->addWidget(comboBox_5);

        comboBox_6 = new QComboBox(layoutWidget);
        comboBox_6->setObjectName("comboBox_6");

        verticalLayout_2->addWidget(comboBox_6);

        comboBox_8 = new QComboBox(layoutWidget);
        comboBox_8->setObjectName("comboBox_8");

        verticalLayout_2->addWidget(comboBox_8);

        comboBox_7 = new QComboBox(layoutWidget);
        comboBox_7->setObjectName("comboBox_7");

        verticalLayout_2->addWidget(comboBox_7);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        Aux_lineEdit = new QLineEdit(layoutWidget);
        Aux_lineEdit->setObjectName("Aux_lineEdit");

        verticalLayout_3->addWidget(Aux_lineEdit);

        Aux2_lineEdit = new QLineEdit(layoutWidget);
        Aux2_lineEdit->setObjectName("Aux2_lineEdit");

        verticalLayout_3->addWidget(Aux2_lineEdit);

        User_lineEdit = new QLineEdit(layoutWidget);
        User_lineEdit->setObjectName("User_lineEdit");

        verticalLayout_3->addWidget(User_lineEdit);

        job_lineEdit = new QLineEdit(layoutWidget);
        job_lineEdit->setObjectName("job_lineEdit");

        verticalLayout_3->addWidget(job_lineEdit);

        item_lineEdit = new QLineEdit(layoutWidget);
        item_lineEdit->setObjectName("item_lineEdit");

        verticalLayout_3->addWidget(item_lineEdit);

        machine_lineEdit = new QLineEdit(layoutWidget);
        machine_lineEdit->setObjectName("machine_lineEdit");

        verticalLayout_3->addWidget(machine_lineEdit);

        rework_lineEdit = new QLineEdit(layoutWidget);
        rework_lineEdit->setObjectName("rework_lineEdit");

        verticalLayout_3->addWidget(rework_lineEdit);

        scrap_lineEdit = new QLineEdit(layoutWidget);
        scrap_lineEdit->setObjectName("scrap_lineEdit");

        verticalLayout_3->addWidget(scrap_lineEdit);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        Aux_label = new QLabel(layoutWidget);
        Aux_label->setObjectName("Aux_label");
        Aux_label->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Aux_label);

        Aux2 = new QLabel(layoutWidget);
        Aux2->setObjectName("Aux2");
        Aux2->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Aux2);

        User = new QLabel(layoutWidget);
        User->setObjectName("User");
        User->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(User);

        Job = new QLabel(layoutWidget);
        Job->setObjectName("Job");
        Job->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Job);

        Item = new QLabel(layoutWidget);
        Item->setObjectName("Item");
        Item->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Item);

        Machine = new QLabel(layoutWidget);
        Machine->setObjectName("Machine");
        Machine->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Machine);

        Rework = new QLabel(layoutWidget);
        Rework->setObjectName("Rework");
        Rework->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Rework);

        Scrap = new QLabel(layoutWidget);
        Scrap->setObjectName("Scrap");
        Scrap->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        verticalLayout->addWidget(Scrap);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Segoe UI Variable Display Light\";\n"
"color:black;"));

        horizontalLayout->addWidget(label_13);

        lineEdit1 = new QLineEdit(layoutWidget);
        lineEdit1->setObjectName("lineEdit1");

        horizontalLayout->addWidget(lineEdit1);

        secondLineEdit = new QLineEdit(layoutWidget);
        secondLineEdit->setObjectName("secondLineEdit");

        horizontalLayout->addWidget(secondLineEdit);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        Terminology->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Terminology);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 461, 21));
        Terminology->setMenuBar(menubar);
        statusbar = new QStatusBar(Terminology);
        statusbar->setObjectName("statusbar");
        Terminology->setStatusBar(statusbar);

        retranslateUi(Terminology);

        QMetaObject::connectSlotsByName(Terminology);
    } // setupUi

    void retranslateUi(QMainWindow *Terminology)
    {
        Terminology->setWindowTitle(QCoreApplication::translate("Terminology", "Terminology", nullptr));
        label->setText(QCoreApplication::translate("Terminology", "Terminology", nullptr));
        label_3->setText(QCoreApplication::translate("Terminology", "<html><head/><body><p><span style=\" font-weight:400;\">Field To Replace</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Terminology", "<html><head/><body><p><span style=\" font-weight:400;\">Replaced By Select From</span></p></body></html>", nullptr));
        Apply->setText(QCoreApplication::translate("Terminology", "Apply Change", nullptr));
        label_5->setText(QCoreApplication::translate("Terminology", "<html><head/><body><p><span style=\" font-weight:400;\">Write Value </span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Terminology", "Aux 1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Terminology", "Aux 2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Terminology", "Aux 3", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("Terminology", "Aux2", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Terminology", "Aux3", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("Terminology", "Users", nullptr));

        comboBox_4->setItemText(0, QCoreApplication::translate("Terminology", "Jobs", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Terminology", "Work", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("Terminology", "Task", nullptr));

        Aux_label->setText(QCoreApplication::translate("Terminology", "Aux", nullptr));
        Aux2->setText(QCoreApplication::translate("Terminology", "Aux 2", nullptr));
        User->setText(QCoreApplication::translate("Terminology", "User", nullptr));
        Job->setText(QCoreApplication::translate("Terminology", "Job", nullptr));
        Item->setText(QCoreApplication::translate("Terminology", "Item", nullptr));
        Machine->setText(QCoreApplication::translate("Terminology", "Machine", nullptr));
        Rework->setText(QCoreApplication::translate("Terminology", "Rework", nullptr));
        Scrap->setText(QCoreApplication::translate("Terminology", "Scrap", nullptr));
        label_13->setText(QCoreApplication::translate("Terminology", "Any other", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Terminology: public Ui_Terminology {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMINOLOGY_H
