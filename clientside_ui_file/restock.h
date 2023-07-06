#ifndef RESTOCK_H
#define RESTOCK_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtGui>
#include <QDebug>
#include <QSqlError>


namespace Ui {
class Restock;
}

class Restock : public QDialog
{
    Q_OBJECT

public:
     QSqlDatabase db;
    explicit Restock(QWidget *parent = nullptr);
    ~Restock();

private slots:


    void on_pushButton_load_table_clicked();

    void on_pushButton_clicked();

    void on_tableWidget_cellActivated(int row, int column);

    void on_label_6_linkActivated(const QString &link);

    void on_pushButton_load_clicked();

private:
    Ui::Restock *ui;
    void readDbAndDisplayTabel();
};


#endif // RESTOCK_H
