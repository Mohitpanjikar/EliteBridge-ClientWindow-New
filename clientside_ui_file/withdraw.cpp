#include "withdraw.h"
#include "ui_withdraw.h"
#include "itembasket.h"
Withdraw::Withdraw(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Withdraw)
{
    ui->setupUi(this);
    readDbAndDisplayTabel_withdraw();
//    connect(ui->pushButton, &QPushButton::clicked, this, &Withdraw::onPushButtonClicked); //adding extra
}

Withdraw::~Withdraw()
{
    delete ui;
}

void Withdraw::on_pushButton_clicked()
{
    ItemBasket* newItemBasket=new ItemBasket;
    newItemBasket->show();
}

void Withdraw::readDbAndDisplayTabel_withdraw()
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

