#ifndef AUXELITE_H
#define AUXELITE_H

#include <QMainWindow>
#include <QObject>
#include <QMainWindow>
#include <QMessageBox>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableView>
#include "ClickableLabel.h"
#include <QLineEdit>

struct undoStruct{
    QString Aux;
    QString Auxiliary;
    QString AuxiliaryAlias;
    QString AuxEnable;
    QString DateCreated;
    QString CreatedBy;
    QString DatelastModified;
    QString LastModifiedBy;
};

QT_BEGIN_NAMESPACE
namespace Ui { class AuxElite; }
QT_END_NAMESPACE

class AuxElite : public QMainWindow
{
    Q_OBJECT

public:
    AuxElite(QWidget *parent = nullptr);
    ~AuxElite();
private slots:
    void onCellClicked(int row, int column);
    void addUserForm();
    void search();
    void deleteUser();
    void updateUser();
    void userSave();
    void fillUndoStruct();
    void undoFunc();
private:
    Ui::AuxElite *ui;
    QString selectedValue;
    ClickableLabel* addUserLabel;
    ClickableLabel* addUpdateLabel;
    ClickableLabel* addSaveLabel;
    ClickableLabel* addUndoLabel;
    ClickableLabel* addfindLabel;
    ClickableLabel* addDeleteLabel;
    ClickableLabel* addExitLabel;
    QLineEdit* lineEdit;
    void readDb();
    undoStruct* undo;
};
#endif // AUXELITE_H
