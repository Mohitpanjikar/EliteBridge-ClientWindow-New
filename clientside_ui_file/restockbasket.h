#ifndef RESTOCKBASKET_H
#define RESTOCKBASKET_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtGui>
#include <QDebug>
#include <QSqlError>

namespace Ui {
class RestockBasket;
}

class RestockBasket : public QDialog
{
    Q_OBJECT

public:
    explicit RestockBasket(QWidget *parent = nullptr);
    ~RestockBasket();

private:
    Ui::RestockBasket *ui;
    void readDbAndDisplayTabel();
};

#endif // RESTOCKBASKET_H
