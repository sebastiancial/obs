#include "oblsch.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    oblsch w;
    w.show();

    return a.exec();
}
