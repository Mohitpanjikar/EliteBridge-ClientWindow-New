#include "restockbasket.h"
#include "ui_restockbasket.h"

RestockBasket::RestockBasket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RestockBasket)
{
    ui->setupUi(this);
    readDbAndDisplayTabel();
}

RestockBasket::~RestockBasket()
{
    delete ui;
}


void RestockBasket::readDbAndDisplayTabel()
{
    QString dbPath = "C:/Users/91788/Desktop/july1/exampleee";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE","DBConnection");
    dataBase.setDatabaseName(dbPath);

    if(!dataBase.open())
    {
        qDebug()<<"dataBase open error";
        return ;
    }

    QSqlQuery query(dataBase);
    QString str = "SELECT * from restock";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(6);
    QStringList labels;
    labels << "Item" << "Qty" << "Description" << "Alias" << "Group" << "Sub_Group";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount = 0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *Item = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *Qty = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *Description = new QTableWidgetItem(query.value(2).toString());
        QTableWidgetItem *Alias = new QTableWidgetItem(query.value(3).toString());
        QTableWidgetItem *Group = new QTableWidgetItem(query.value(4).toString());
        QTableWidgetItem *Sub_Group = new QTableWidgetItem(query.value(5).toString());

        Item->setText(query.value(0).toString());
        Qty->setText(query.value(1).toString());
        Description->setText(query.value(2).toString());
        Alias->setText(query.value(3).toString());
        Group->setText(query.value(4).toString());
        Sub_Group->setText(query.value(5).toString());

        ui->tableWidget->setItem(rowCount,0,Item);
        ui->tableWidget->setItem(rowCount,1,Qty);
        ui->tableWidget->setItem(rowCount,2,Description);
        ui->tableWidget->setItem(rowCount,3,Alias);
        ui->tableWidget->setItem(rowCount,4,Group);
        ui->tableWidget->setItem(rowCount,5,Sub_Group);

        rowCount++;
    }
}
