#include "restock.h"
#include "ui_restock.h"
#include "restockbasket.h"
#include "QString"
Restock::Restock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Restock)
{
    ui->setupUi(this);
//    db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName("C:/Users/91788/Desktop/july1/exampleee");
    readDbAndDisplayTabel();
}

Restock::~Restock()
{
    delete ui;
}

void Restock::on_pushButton_load_table_clicked()
{

    RestockBasket* newRestock=new RestockBasket;
    newRestock->show();

}


void Restock::on_pushButton_clicked()
{

}


void Restock::on_tableWidget_cellActivated(int row, int column)
{

}

/*
void Restock::on_pushButton_load_clicked()
{
    db.open();
    QSqlQuery query(db);
    QString str = "SELECT * FROM worker";

    if(!db.open()){
        qDebug()<<"Database Open Error";
        return ;
    }

    ui->tableWidget->setColumnCount(6);
    QStringList labels;
    labels << "Item" << "Qty" << "Description" << "Alias" << "Group" << "Sub_Group";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount = 0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *Item = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *Qty = new QTableWidgetItem(query.value(2).toString());
        QTableWidgetItem *Description = new QTableWidgetItem(query.value(3).toString());
        QTableWidgetItem *Alias = new QTableWidgetItem(query.value(4).toString());
        QTableWidgetItem *Group = new QTableWidgetItem(query.value(5).toString());
        QTableWidgetItem *Sub_Group = new QTableWidgetItem(query.value(6).toString());

        ui->tableWidget->setItem(rowCount, 0, Item);
        ui->tableWidget->setItem(rowCount, 1, Qty);
        ui->tableWidget->setItem(rowCount, 2, Description);
        ui->tableWidget->setItem(rowCount, 3, Alias);
        ui->tableWidget->setItem(rowCount, 4, Group);
        ui->tableWidget->setItem(rowCount, 5, Sub_Group);

        qDebug() << "Row: " << rowCount;
        qDebug() << "Item: " << Item->text();
        qDebug() << "Qty: " << Qty->text();
        qDebug() << "Description: " << Description->text();
        qDebug() << "Alias: " << Alias->text();
        qDebug() << "Group: " << Group->text();
        qDebug() << "Sub_Group: " << Sub_Group->text();

        rowCount++;
    }
}
*/

void Restock::readDbAndDisplayTabel()
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

void Restock::on_pushButton_load_clicked()
{

}

