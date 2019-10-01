#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QtNetwork/QHostInfo>
#include<QtNetwork/QHostAddress>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void lookedUpHostInfo(const QHostInfo &host);   //自定义槽函数

    void on_pushButton_4_clicked();

private:
    QString protocolName(QAbstractSocket::NetworkLayerProtocol protocol);

    Ui::Dialog *ui;
};

#endif // DIALOG_H
