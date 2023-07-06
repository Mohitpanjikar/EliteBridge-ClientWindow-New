#ifndef ITEMBASKET_H
#define ITEMBASKET_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtGui>
#include <QDebug>
#include <QSqlError>

namespace Ui {
class ItemBasket;
}

class ItemBasket : public QDialog
{
    Q_OBJECT

public:
    explicit ItemBasket(QWidget *parent = nullptr);
    ~ItemBasket();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_Refresh_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ItemBasket *ui;
    void readDbAndDisplayTabel_itemBusket();
};

#endif // ITEMBASKET_H
