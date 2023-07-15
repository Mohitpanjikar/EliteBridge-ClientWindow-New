#include "auxelite.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AuxElite w;
    w.show();
    return a.exec();
}
