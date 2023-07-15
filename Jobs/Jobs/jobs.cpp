#include "jobs.h"
#include "./ui_jobs.h"
#include <QMessageBox>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableView>
#include <QHBoxLayout>

Jobs::Jobs(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Jobs)
{
    ui->setupUi(this);



    QHBoxLayout* horizontalLayout = new QHBoxLayout(ui->frame);

    addUserLabel = new ClickableLabel(this);
    addUserLabel->setText("Add User");
    addUserLabel->setScaledContents(true);
    addUserLabel->setMaximumSize(72,72);
    addUserLabel->setPixmap(QPixmap("D:/MachineSetup/img/file-new-svgrepo-com.svg"));

    QObject::connect(addUserLabel, &ClickableLabel::clicked,this,[&]() {
        addUserForm();
    });
        connect(ui->tableWidget, &QTableWidget::cellClicked, this, &Jobs::onCellClicked);

    horizontalLayout->insertWidget(0,addUserLabel);


    addUpdateLabel = new ClickableLabel(this);
    addUpdateLabel->setText("Update User");
    addUpdateLabel->setScaledContents(true);
    addUpdateLabel->setMaximumSize(72,72);
    QPixmap svgImage("D:/MachineSetup/img/edit-report-svgrepo-com.svg");
    addUpdateLabel->setPixmap(svgImage);
    QObject::connect(addUpdateLabel, &ClickableLabel::clicked,this,[&]() {
        updateUser();
    });
    horizontalLayout->insertWidget(1,addUpdateLabel);


    addSaveLabel=new ClickableLabel(this);
    addSaveLabel->setText("save User");
    addSaveLabel->setScaledContents(true);
    addSaveLabel->setMaximumSize(72,72);
    QPixmap saveImage("D:/MachineSetup/img/save-svgrepo-com.svg");
    addSaveLabel->setPixmap(saveImage);
    QObject::connect(addSaveLabel, &ClickableLabel::clicked,this,[&]() {
        userSave();
    });
    horizontalLayout->insertWidget(2,addSaveLabel);


    addUndoLabel=new ClickableLabel(this);
    addUndoLabel->setText("undo cahnges");
    addUndoLabel->setScaledContents(true);
    addUndoLabel->setMaximumSize(72,72);
    QPixmap undoImage("D:/MachineSetup/img/undo-svgrepo-com.svg");
    addUndoLabel->setPixmap(undoImage);
    QObject::connect(addUndoLabel, &ClickableLabel::clicked,this,[&]() {
        undoFunc();
    });
    horizontalLayout->insertWidget(3,addUndoLabel);

    addDeleteLabel=new ClickableLabel(this);
    addDeleteLabel->setText("user delete");
    addDeleteLabel->setScaledContents(true);
    addDeleteLabel->setMaximumSize(72,72);
    QPixmap deleteImage("D:/MachineSetup/img/delete-alt-svgrepo-com.svg");
    addDeleteLabel->setPixmap(deleteImage);
    QObject::connect(addDeleteLabel, &ClickableLabel::clicked,this,[&]() {
        deleteUser();
    });
    horizontalLayout->insertWidget(4,addDeleteLabel);


    lineEdit = new QLineEdit(this);
    lineEdit->setPlaceholderText("Enter text...");

    lineEdit->setMaxLength(10);
    horizontalLayout->insertWidget(5,lineEdit);


    addfindLabel=new ClickableLabel(this);
    addfindLabel->setText("undo cahnges");
    addfindLabel->setScaledContents(true);
    addfindLabel->setMaximumSize(72,72);
    QPixmap findImage("D:/MachineSetup/img/search-alt-3-svgrepo-com.svg");
    addfindLabel->setPixmap(findImage);
    QObject::connect(addfindLabel, &ClickableLabel::clicked,this,[&]() {
        search();
    });
    horizontalLayout->insertWidget(6,addfindLabel);

    addExitLabel=new ClickableLabel(this);
    addExitLabel->setText("undo cahnges");
    addExitLabel->setScaledContents(true);
    addExitLabel->setMaximumSize(72,72);
    QPixmap exitImage("D:/MachineSetup/img/exit-svgrepo-com (1).svg");
    addExitLabel->setPixmap(exitImage);
    QObject::connect(addExitLabel, &ClickableLabel::clicked,this,[&]() {
        this->close();
    });
    horizontalLayout->insertWidget(7,addExitLabel);




    ui->frame->setLayout(horizontalLayout);
    connect(ui->tableWidget, &QTableWidget::cellClicked, this, &Jobs::onCellClicked);

    readDb();

}

Jobs::~Jobs()
{
    delete ui;
}


void Jobs:: readDb()
{

    QString dbPath = "D:/Jobs/JobsDB";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE","DBConnection");
    dataBase.setDatabaseName(dbPath);

    if(!dataBase.open())
    {
        qDebug()<<"dataBase open error";
        return ;
    }

    QSqlQuery query(dataBase);
    QString str = "SELECT * from jobsDB";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(10);
    QStringList labels;


    labels << "job" << "Description" << "Alias" << "ContractDate"<<"jobGroup" << "JobEnabled" << "DateCreated" <<"CreatedBy" << "DatelastModified" << "LastModifiedBy";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount=0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *job = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *Description = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *Alias = new QTableWidgetItem(query.value(2).toString());
        QTableWidgetItem *ContractDate = new QTableWidgetItem(query.value(3).toString());
        QTableWidgetItem *jobGroup = new QTableWidgetItem(query.value(4).toString());
        QTableWidgetItem *JobEnabled = new QTableWidgetItem(query.value(5).toString());
        QTableWidgetItem *DateCreated = new QTableWidgetItem(query.value(6).toString());
        QTableWidgetItem *CreatedBy = new QTableWidgetItem(query.value(7).toString());
        QTableWidgetItem *DatelastModified = new QTableWidgetItem(query.value(8).toString());
        QTableWidgetItem *LastModifiedBy = new QTableWidgetItem(query.value(9).toString());

        job->setText(query.value(0).toString());
        Description->setText(query.value(1).toString());
        Alias->setText(query.value(2).toString());
        ContractDate->setText(query.value(3).toString());
        jobGroup->setText(query.value(4).toString());
        JobEnabled->setText(query.value(5).toString());
        DateCreated->setText(query.value(6).toString());
        CreatedBy->setText(query.value(7).toString());
        DatelastModified->setText(query.value(8).toString());
        LastModifiedBy->setText(query.value(9).toString());

        ui->tableWidget->setItem(rowCount,0,job);
        ui->tableWidget->setItem(rowCount,1,Description);
        ui->tableWidget->setItem(rowCount,2,Alias);
        ui->tableWidget->setItem(rowCount,3,ContractDate);
        ui->tableWidget->setItem(rowCount,4,jobGroup);
        ui->tableWidget->setItem(rowCount,5,JobEnabled);
        ui->tableWidget->setItem(rowCount,6,DateCreated);
        ui->tableWidget->setItem(rowCount,7,CreatedBy);
        ui->tableWidget->setItem(rowCount,8,DatelastModified);
        ui->tableWidget->setItem(rowCount,9,LastModifiedBy);

        rowCount++;
    }
    dataBase.close();
}




void Jobs::addUserForm(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/Jobs/JobsDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;

    QString insertQuery = "INSERT INTO JobsDB (job,Description,Alias,ContractDate,jobGroup,JobEnabled,DateCreated,CreatedBy,DatelastModified,LastModifiedBy) VALUES (?, ?, ?, ?, ?, ?, ? ,?,?,?)";
    query.prepare(insertQuery);


    query.addBindValue(ui->Job_2->text());
    query.addBindValue( ui->Description->text());
    query.addBindValue( ui->Alias->text());
    query.addBindValue(ui->contractDate->text());
    query.addBindValue( ui->JobGroup->text());
    query.addBindValue( ui->JobEnable->text());
    query.addBindValue( ui->DateCreated->text());
    query.addBindValue( ui->CreatedBy->text());
    query.addBindValue( ui->DatelastModified->text());
    query.addBindValue( ui->LastModifiedBy->text());

    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data inserted successfully!");
    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");
    }
    db.close();
}

//search -
void Jobs::userSave()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";
    ui->tableWidget->setHorizontalHeaderLabels(label);
    readDb();

}


void Jobs::search(){

    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    QStringList label;
    label<<"";

    QString dbPath = "D:/Jobs/JobsDB";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE","DBConnection");
    dataBase.setDatabaseName(dbPath);

    if(!dataBase.open())
    {
        qDebug()<<"dataBase open error";
        return ;
    }

    QSqlQuery query(dataBase);
    QString str = "SELECT * FROM JobsDB WHERE job LIKE '" + lineEdit->text() + "%'";
    if(!query.exec(str))
    {
        qDebug()<<"Query execution Failed";
        return;
    }

    ui->tableWidget->setColumnCount(7);
    QStringList labels;
    labels << "job" << "Description" << "Alias" << "ContractDate"<<"jobGroup" << "JobEnabled" << "DateCreated" <<"CreatedBy" << "DatelastModified" << "LastModifiedBy";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    int rowCount=0;
    while(query.next())
    {
        ui->tableWidget->insertRow(rowCount);
        QTableWidgetItem *job = new QTableWidgetItem(query.value(0).toString());
        QTableWidgetItem *Description = new QTableWidgetItem(query.value(1).toString());
        QTableWidgetItem *Alias = new QTableWidgetItem(query.value(2).toString());
        QTableWidgetItem *ContractDate = new QTableWidgetItem(query.value(3).toString());
        QTableWidgetItem *jobGroup = new QTableWidgetItem(query.value(4).toString());
        QTableWidgetItem *JobEnabled = new QTableWidgetItem(query.value(5).toString());
        QTableWidgetItem *DateCreated = new QTableWidgetItem(query.value(6).toString());
        QTableWidgetItem *CreatedBy = new QTableWidgetItem(query.value(7).toString());
        QTableWidgetItem *DatelastModified = new QTableWidgetItem(query.value(8).toString());
        QTableWidgetItem *LastModifiedBy = new QTableWidgetItem(query.value(9).toString());

        job->setText(query.value(0).toString());
        Description->setText(query.value(1).toString());
        Alias->setText(query.value(2).toString());
        ContractDate->setText(query.value(3).toString());
        jobGroup->setText(query.value(4).toString());
        JobEnabled->setText(query.value(5).toString());
        DateCreated->setText(query.value(6).toString());
        CreatedBy->setText(query.value(7).toString());
        DatelastModified->setText(query.value(8).toString());
        LastModifiedBy->setText(query.value(9).toString());

        ui->tableWidget->setItem(rowCount,0,job);
        ui->tableWidget->setItem(rowCount,1,Description);
        ui->tableWidget->setItem(rowCount,2,Alias);
        ui->tableWidget->setItem(rowCount,3,ContractDate);
        ui->tableWidget->setItem(rowCount,4,jobGroup);
        ui->tableWidget->setItem(rowCount,5,JobEnabled);
        ui->tableWidget->setItem(rowCount,6,DateCreated);
        ui->tableWidget->setItem(rowCount,7,CreatedBy);
        ui->tableWidget->setItem(rowCount,8,DatelastModified);
        ui->tableWidget->setItem(rowCount,9,LastModifiedBy);

        rowCount++;
    }
    dataBase.close();
}

//click -
int previousRowuser = -1;
void Jobs::onCellClicked(int row, int column)
{
    if (previousRowuser != -1) {
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
        {
            QTableWidgetItem* item = ui->tableWidget->item(previousRowuser, col);
            if (item)
                item->setBackground(Qt::white); // Set the default background color
        }
    }

    QTableWidgetItem *item = ui->tableWidget->item(row, column);
    if (item != nullptr)
    {
        selectedValue = item->text();


    }

    for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
    {
        QTableWidgetItem* item = ui->tableWidget->item(row, col);
        if (item)
            item->setBackground(Qt::yellow); // Set the desired background color
    }
    previousRowuser = row;
}
void Jobs::deleteUser()
{

    QMessageBox::StandardButton confirmation;
    confirmation = QMessageBox::question(this, "Confirmation", "Are you sure you want to delete this record?", QMessageBox::Yes | QMessageBox::No);

    fillUndoStruct();
    if (confirmation == QMessageBox::Yes) {
        QString dbPath = "D:/Jobs/JobsDB";
        QSqlDatabase dataBase;
        dataBase = QSqlDatabase::addDatabase("QSQLITE","DBConnection");
        dataBase.setDatabaseName(dbPath);

        if(!dataBase.open())
        {
            qDebug()<<"dataBase open error";
            return ;
        }


        QSqlQuery query(dataBase);
        query.prepare("DELETE FROM JobsDB WHERE job = :rowId");
        query.bindValue(":rowId", selectedValue);

        if (query.exec()) {
            // Deletion successful
            QMessageBox::information(this, "Success", "Record deleted successfully.");
        } else {
            // Deletion failed
            QMessageBox::information(this, "Failed", "Record not deleted.");
        }

        dataBase.close();
    }
    else{
        return;
    }
}


//undo function -
void Jobs::fillUndoStruct(){
    QString dbPath = "D:/Jobs/JobsDB";
    QSqlDatabase dataBase;
    dataBase = QSqlDatabase::addDatabase("QSQLITE","DBConnection");
    dataBase.setDatabaseName(dbPath);

    if(!dataBase.open())
    {
        qDebug()<<"dataBase open error";
        return ;
    }


    QSqlQuery query(dataBase);
    query.prepare("SELECT * FROM jobsDB WHERE job = :job");
    query.bindValue(":job", selectedValue);


    if(!query.exec())
    {
        qDebug()<<"Query execution Failed";
        return;
    }


    undo=new undoStruct;
    if(query.next()){
        undo->job_2=query.value(0).toString();
        undo->Description=query.value(1).toString();
        undo->Alias=query.value(2).toString();
        undo->ContractDate=query.value(3).toString();
        undo->jobGroup=query.value(4).toString();
        undo->JobEnabled=query.value(5).toString();
        undo->DateCreated=query.value(6).toString();
        undo->CreatedBy=query.value(7).toString();
        undo->DatelastModified=query.value(8).toString();
        undo->LastModifiedBy=query.value(9).toString();

    }


    dataBase.close();
    return ;
}
void Jobs::undoFunc(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/Jobs/JobsDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;

    QString insertQuery = "INSERT INTO jobsDB (job,Description,Alias,ContractDate,jobGroup,JobEnabled,DateCreated,CreatedBy,DatelastModified,LastModifiedBy) VALUES (?, ?, ?, ?, ?, ?, ? ,?,?,?)";
    query.prepare(insertQuery);



    query.addBindValue(undo->job_2);
    query.addBindValue(undo->Description );
    query.addBindValue(undo->Alias);
    query.addBindValue(undo->ContractDate);
    query.addBindValue(undo->jobGroup );
    query.addBindValue(undo->JobEnabled );
    query.addBindValue(undo->DateCreated);
    query.addBindValue(undo->CreatedBy);
    query.addBindValue(undo->DatelastModified);
    query.addBindValue(undo->LastModifiedBy);


    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data Reinserted ");

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to insert data!");

    }
    db.close();
}

//update user - add on

void Jobs::updateUser()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("D:/Jobs/JobsDB");

    if (!db.open()) {
        qInfo()<<"db connection failed";
    }

    QSqlQuery query;


    QString insertQuery = "UPDATE jobsDB SET job = :job, Description = :description, Alias = :alias, ContractDate = :contractDate, jobGroup = :jobGroup, JobEnabled = :jobEnabled,DateCreated = :dateCreated, CreatedBy = :createdBy,DatelastModified = :datelastModified, LastModifiedBy = :lastModifiedBy   WHERE job = :job";
    query.prepare(insertQuery);


    query.bindValue(":job",ui->Job_2->text());
    query.bindValue(":description",ui->Description->text());
    query.bindValue(":alias",  ui->Alias->text());
    query.bindValue(":contractDate",ui->contractDate->text());
    query.bindValue(":jobGroup",ui->JobGroup->text());
    query.bindValue(":jobEnabled",ui->JobEnable->text());
    query.bindValue(":dateCreated", ui->DateCreated->text());
    query.bindValue(":createdBy", ui->CreatedBy->text());
    query.bindValue(":datelastModified",  ui->DatelastModified->text());
    query.bindValue(":lastModifiedBy", ui->LastModifiedBy->text());



    if (query.exec()) {
        QMessageBox::information(nullptr, "Success", "Data update successfully!");

    } else {
        QMessageBox::warning(nullptr, "Error", "Failed to update data!");
    }
    db.close();
}

