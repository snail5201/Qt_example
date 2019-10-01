#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //查找可用的串口
    foreach(const QSerialPortInfo &info,QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);
        if(serial.open(QIODevice::ReadWrite))
        {
            ui->port_comboBox->addItem(serial.portName());
            serial.close();
        }
    }

    //设置波特率下拉菜单的第0项默认值
    ui->bitrate_comboBox->setCurrentIndex(0);

    ui->pushButton->setEnabled(false);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_2_clicked()
{
    if(ui->pushButton_2->text()==QStringLiteral("打开串口"))
    {
        serial=new QSerialPort;
        serial->setPortName(ui->port_comboBox->currentText());//设置串口名,大小写不区分，都可以用
        serial->open(QIODevice::ReadWrite);     //打开串口
        serial->setBaudRate(QSerialPort::Baud9600);   //设置波特率

        //设置数据位
        switch(ui->data_comboBox->currentIndex())
        {
        case 0:
            serial->setDataBits(QSerialPort::Data8);
            break;
        default:
            break;
        }
        //设置校验位
        switch(ui->check_comboBox->currentIndex())
        {
        case 0:
            serial->setParity(QSerialPort::NoParity);
            break;
        default:
            break;
        }
        //设置停止位
        switch (ui->stop_comboBox->currentIndex())
        {
        case 0:
            serial->setStopBits(QSerialPort::OneStop);
            break;
        case 1:
            serial->setStopBits(QSerialPort::TwoStop);
            break;
        default:
            break;
        }
        //设置流控制
        serial->setFlowControl(QSerialPort::NoFlowControl);//设置位无流控制

        //关闭设置菜单使能
        ui->port_comboBox->setEnabled(false);
        ui->data_comboBox->setEnabled(false);
        ui->check_comboBox->setEnabled(false);
        ui->stop_comboBox->setEnabled(false);
        ui->bitrate_comboBox->setEnabled(false);
        ui->pushButton_2->setText(QStringLiteral("关闭串口"));
        ui->pushButton->setEnabled(true);


        QObject::connect(serial,&QSerialPort::readyRead,this,&Dialog::ReadData);
    }
    else
    {
        //关闭串口
        serial->clear();
        serial->close();
        serial->deleteLater();

        //恢复使能
        ui->port_comboBox->setEnabled(true);
        ui->data_comboBox->setEnabled(true);
        ui->check_comboBox->setEnabled(true);
        ui->stop_comboBox->setEnabled(true);
        ui->bitrate_comboBox->setEnabled(true);
        ui->pushButton->setEnabled(false);
        ui->pushButton_2->setText(QStringLiteral("打开串口"));
    }
}

void Dialog::on_pushButton_clicked()
{
    //发送按钮
    serial->write(ui->send_plainTextEdit->toPlainText().toLatin1());
}

void Dialog::ReadData()
{
    QByteArray buf;

    buf=serial->readAll();
    if(!buf.isEmpty())
    {
    QString str = buf;
    ui->receive_plainTextEdit->appendPlainText(str);
    }
    buf.clear();
}
