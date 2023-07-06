/********************************************************************************
** Form generated from reading UI file 'inserdata.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERDATA_H
#define UI_INSERDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inserData
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label;
    QLineEdit *textEdit_2;

    void setupUi(QWidget *inserData)
    {
        if (inserData->objectName().isEmpty())
            inserData->setObjectName("inserData");
        inserData->resize(470, 284);
        pushButton = new QPushButton(inserData);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 200, 89, 25));
        textEdit = new QTextEdit(inserData);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(120, 90, 271, 31));
        QFont font;
        font.setBold(true);
        textEdit->setFont(font);
        textEdit->setPlaceholderText(QString::fromUtf8("user Name"));
        label = new QLabel(inserData);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 40, 181, 31));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI Variable\";\n"
"color:black;"));
        textEdit_2 = new QLineEdit(inserData);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(120, 140, 271, 31));
        textEdit_2->setFont(font);
        textEdit_2->setEchoMode(QLineEdit::Password);

        retranslateUi(inserData);

        QMetaObject::connectSlotsByName(inserData);
    } // setupUi

    void retranslateUi(QWidget *inserData)
    {
        inserData->setWindowTitle(QCoreApplication::translate("inserData", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("inserData", "Add", nullptr));
        label->setText(QCoreApplication::translate("inserData", "Insert Admin Credential", nullptr));
        textEdit_2->setPlaceholderText(QCoreApplication::translate("inserData", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inserData: public Ui_inserData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERDATA_H
