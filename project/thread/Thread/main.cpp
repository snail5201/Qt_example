#include "dialog.h"
#include <QApplication>
#include<QTextCodec>
#include<QDialog>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::codecForName("ufg-8");
    Dialog w;
    w.setWindowTitle(QStringLiteral("骰子_thread"));
    w.show();

    return a.exec();
}
