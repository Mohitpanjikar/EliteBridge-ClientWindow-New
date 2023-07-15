#ifndef JOBS_H
#define JOBS_H

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
    QString job_2;
    QString Description;
    QString Alias;
    QString ContractDate;
    QString jobGroup;
    QString JobEnabled;
    QString DateCreated;
    QString CreatedBy;
    QString DatelastModified;
    QString LastModifiedBy;
};

QT_BEGIN_NAMESPACE
namespace Ui { class Jobs; }
QT_END_NAMESPACE

class Jobs : public QMainWindow
{
    Q_OBJECT

public:
    Jobs(QWidget *parent = nullptr);
    ~Jobs();
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
    Ui::Jobs *ui;
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
#endif // JOBS_H
