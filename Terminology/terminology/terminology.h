#ifndef TERMINOLOGY_H
#define TERMINOLOGY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Terminology; }
QT_END_NAMESPACE

class Terminology : public QMainWindow
{
    Q_OBJECT

public:
    Terminology(QWidget *parent = nullptr);
    ~Terminology();

private slots:
    void on_Apply_clicked();

private:
    Ui::Terminology *ui;
};
#endif // TERMINOLOGY_H
