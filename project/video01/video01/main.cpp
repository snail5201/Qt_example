#include "mulplayer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MulPlayer w;
    w.show();

    return a.exec();
}
