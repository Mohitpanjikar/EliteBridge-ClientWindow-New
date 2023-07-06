/********************************************************************************
** Form generated from reading UI file 'deleteuser.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEUSER_H
#define UI_DELETEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteuser
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *deleteuser)
    {
        if (deleteuser->objectName().isEmpty())
            deleteuser->setObjectName("deleteuser");
        deleteuser->resize(416, 279);
        pushButton = new QPushButton(deleteuser);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 160, 89, 25));
        label = new QLabel(deleteuser);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 60, 171, 31));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI Variable\";\n"
"color:black;\n"
""));
        lineEdit = new QLineEdit(deleteuser);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 110, 241, 25));
        QFont font;
        font.setBold(true);
        lineEdit->setFont(font);

        retranslateUi(deleteuser);

        QMetaObject::connectSlotsByName(deleteuser);
    } // setupUi

    void retranslateUi(QWidget *deleteuser)
    {
        deleteuser->setWindowTitle(QCoreApplication::translate("deleteuser", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("deleteuser", "Delete", nullptr));
        label->setText(QCoreApplication::translate("deleteuser", "Delete Admin credential", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("deleteuser", "User Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteuser: public Ui_deleteuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEUSER_H
