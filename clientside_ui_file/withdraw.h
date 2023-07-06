#ifndef WITHDRAW_H
#define WITHDRAW_H


#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtGui>
#include <QDebug>
#include <QSqlError>

namespace Ui {
class Withdraw;
}

class Withdraw : public QDialog
{
    Q_OBJECT

public:
    explicit Withdraw(QWidget *parent = nullptr);
    ~Withdraw();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Withdraw *ui;
    void readDbAndDisplayTabel_withdraw();
};

#endif // WITHDRAW_H
