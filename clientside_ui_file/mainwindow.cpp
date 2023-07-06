#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "clientwindow.h"
#include <QDebug>

#define Path_to_DB "C:/Users/91788/Desktop/july1/exampleee"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    myDB = QSqlDatabase::addDatabase("QSQLITE");
    myDB.setDatabaseName(Path_to_DB);
    QFileInfo checkFile(Path_to_DB);

    if(checkFile.isFile())
    {
        if(myDB.open())
        {
            qDebug()<<"connected to the db";
        }
    }else{
        qDebug()<<"Not connected to the db";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "admin" && password == "root"){
        ClientWindow* client_window=new ClientWindow;
        client_window->show();
    }else{
        QMessageBox::warning(this,"Login","Username and password is Incorrect !!!");
    }
}
*/
void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    QSqlQuery query;
    query.prepare("SELECT * FROM Users WHERE Name = :username");
    query.bindValue(":username", username);

    if (query.exec() && query.next())
    {
        QString dbPassword = query.value("password").toString();

        if (password == dbPassword)
        {
            // Username and password match, open the client window
            ClientWindow* client_window = new ClientWindow;
            client_window->show();
            return;
        }
    }
    QMessageBox::warning(this, "Login", "Username and password are incorrect.");
}
