#include "itembasket.h"
#include "ui_itembasket.h"
#include "mainwindow.h"
#include "clientwindow.h"
#include "withdraw.h"
#include <QMessageBox>

ItemBasket::ItemBasket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemBasket)
{
    ui->setupUi(this);
    readDbAndDisplayTabel_itemBusket();
    on_pushButton_2_clicked();
}

ItemBasket::~ItemBasket()
{
    delete ui;
}

void ItemBasket::on_pushButton_4_clicked()
{
    ClientWindow* newClient=new ClientWindow;
    newClient->show();
}


void ItemBasket::on_pushButton_clicked()
{
    Withdraw* newWithdraw = new Withdraw;
    newWithdraw->show();
}


void ItemBasket::on_pushButton_3_clicked()
{
    ClientWindow* newClient=new ClientWindow;
    newClient->show();
}

void ItemBasket::readDbAndDisplayTabel_itemBusket()
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
    QString str = "SELECT * from withdraw";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(6);
    QStringList labels;
    labels << "Item" << "Description" << "Qty" << "Alias" << "Sub_Group" << "Supplier";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount = 0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *Item = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *Description = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *Qty = new QTableWidgetItem(query.value(2).toString());
        QTableWidgetItem *Alias = new QTableWidgetItem(query.value(3).toString());
        QTableWidgetItem *Sub_Group = new QTableWidgetItem(query.value(4).toString());
        QTableWidgetItem *Supplier = new QTableWidgetItem(query.value(5).toString());

        Item->setText(query.value(0).toString());
        Description->setText(query.value(1).toString());
        Qty->setText(query.value(2).toString());
        Alias->setText(query.value(3).toString());
        Sub_Group->setText(query.value(4).toString());
        Supplier->setText(query.value(5).toString());

        ui->tableWidget->setItem(rowCount,0,Item);
        ui->tableWidget->setItem(rowCount,1,Description);
        ui->tableWidget->setItem(rowCount,2,Qty);
        ui->tableWidget->setItem(rowCount,3,Alias);
        ui->tableWidget->setItem(rowCount,4,Sub_Group);
        ui->tableWidget->setItem(rowCount,5,Supplier);

        rowCount++;
    }
}




void ItemBasket::on_Refresh_clicked()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    readDbAndDisplayTabel_itemBusket();
}

/*
void ItemBasket::on_pushButton_2_clicked()
{
    QString dbPath = "C:/Users/91788/Desktop/july1/exampleee";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE","DBConnection");
    dataBase.setDatabaseName(dbPath);

    dataBase.open();
    QSqlDatabase::database().transaction();
    QSqlQuery Query_Update_Data(dataBase);
    Query_Update_Data.prepare("UPDATE withdraw SET Description=:Description,Qty=:Qty WHERE Item=" + ui->lineEdit_ID->text() + "");
    Query_Update_Data.bindValue(":Description",ui->lineEdit_Value_1->text());
    Query_Update_Data.bindValue(":Qty",ui->lineEdit_Value_2->text());
    Query_Update_Data.exec();
    QSqlDatabase::database().commit();
    dataBase.close();
}
*/


void ItemBasket::on_pushButton_2_clicked()
{
    QString dbPath = "C:/Users/91788/Desktop/july1/exampleee";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE", "DBConnection");
    dataBase.setDatabaseName(dbPath);

    QString itemID = ui->lineEdit_ID->text();
    QString qty = ui->lineEdit_Value_2->text();

    QSqlQuery qry;
    qry.prepare("UPDATE withdraw SET Qty = :Qty WHERE Item = :Item AND Qty = :OldQty");
    qry.bindValue(":Qty", qty);
    qry.bindValue(":Item", itemID);
    qry.bindValue(":OldQty", ui->lineEdit_Value_2->text());


}
