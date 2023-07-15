#include "machine.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Machine w;
    w.show();
    return a.exec();
}
