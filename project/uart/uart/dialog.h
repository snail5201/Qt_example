#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QtSerialPort/QSerialPort>
#include<QtSerialPort/QSerialPortInfo>

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
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void ReadData();
private:
    Ui::Dialog *ui;

    QSerialPort *serial;    //全局的串口对象
};

#endif // DIALOG_H
