#include "terminology.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Terminology w;
    w.show();
    return a.exec();
}
