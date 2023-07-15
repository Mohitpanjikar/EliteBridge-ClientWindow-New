#include "terminology.h"
#include "./ui_terminology.h"

Terminology::Terminology(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Terminology)
{
    ui->setupUi(this);
}

Terminology::~Terminology()
{
    delete ui;
}

void Terminology::on_Apply_clicked()
{
    QString lineEditText = ui->lineEdit1->text(); // Get the text entered in the first line edit
    QString newLineEditValue = ui->secondLineEdit->text(); // Get the text entered in the second line edit

    // Find all QLabel objects within the parent widget
    QList<QLabel*> labelsList = ui->centralwidget->findChildren<QLabel*>();

    // Iterate through each label and compare its text with the line edit value
    for (QLabel* label : labelsList) {
        if (label->text().compare(lineEditText, Qt::CaseInsensitive) == 0) {
            label->setText(newLineEditValue); // Replace the label's text with the value from the second line edit
            break; // Exit the loop after finding the first matching label
        }
    }
}

//code 2 - field value function ->
/*
void Terminology::on_Apply_clicked()
{
    QString auxLineEditValue = ui->Aux_lineEdit->text(); // Get the text entered in the Aux_lineEdit

    // Find all QLabel objects within the parent widget
    QList<QLabel*> labelsList = ui->centralwidget->findChildren<QLabel*>();

    // Iterate through each label and check for "Aux" in the text
    for (QLabel* label : labelsList) {
        QString labelText = label->text();

        if (labelText.contains("Aux", Qt::CaseInsensitive)) {
            labelText.replace("Aux", auxLineEditValue, Qt::CaseInsensitive);
            label->setText(labelText); // Replace the label's text with the modified text
        }
    }
}
*/




