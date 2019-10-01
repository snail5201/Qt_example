#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    //QHostInfo获取主机信息
    QString hostName=QHostInfo::localHostName();    //获取本地主机名
    ui->plainTextEdit->appendPlainText(QStringLiteral("本机主机名：")+hostName+"\n");
    QHostInfo hostInfo=QHostInfo::fromName(hostName);   //获取本地IP地址

    QList<QHostAddress> addList=hostInfo.addresses();   //ip地址列表
    if(!addList.isEmpty())
    {
        for (int i=0;i<addList.count();i++) {
            QHostAddress aHost=addList.at(i);   //每一项是一个QHostAddress
            bool show=ui->checkBox->isChecked();
            if(show)
            {
                show=(QAbstractSocket::IPv4Protocol==aHost.protocol());//IPv4协议
            }
            else
            {
                show=true;
            }

            if(show)
            {
                ui->plainTextEdit->appendPlainText(QStringLiteral("协 议：")+protocolName(aHost.protocol()));
                ui->plainTextEdit->appendPlainText(QStringLiteral("本机IP地址：")+aHost.toString());
                ui->plainTextEdit->appendPlainText("");
            }
        }
    }
}

QString Dialog::protocolName(QAbstractSocket::NetworkLayerProtocol protocol)
{
    switch (protocol)
    {
    case QAbstractSocket::IPv4Protocol:
        return "IPv4 Protocol";
    case QAbstractSocket::IPv6Protocol:
        return "IPv6 Protocol";
    case QAbstractSocket::AnyIPProtocol:
        return "Any IP Protocol";
    default:
        return "Unknow Network Layer Protocol";
    }
}

void Dialog::on_pushButton_5_clicked()
{
    QString hostname=ui->lineEdit->text();  //获取界面上的主机名
    ui->plainTextEdit->appendPlainText(QStringLiteral("正在查找主机信息：")+hostname);
    QHostInfo::lookupHost(hostname,this,SLOT(lookedUpHostInfo(QHostInfo)));
}

void Dialog::lookedUpHostInfo(const QHostInfo &host)
{
    //查找主机信息的槽函数
    QList<QHostAddress> addList=host.addresses();
    if(!addList.isEmpty())
    {
        for (int i=0;i<addList.count();i++) {
            QHostAddress aHost=addList.at(i);
            bool show=ui->checkBox->isChecked();    //只显示IPv4
            if(show)
                show=QAbstractSocket::IPv4Protocol==aHost.protocol();
            else
                show=true;

            if(show)
            {
                ui->plainTextEdit->appendPlainText(QStringLiteral("协议：")+protocolName(aHost.protocol()));
                ui->plainTextEdit->appendPlainText(aHost.toString());
            }
        }
    }
}

void Dialog::on_pushButton_4_clicked()
{
    ui->plainTextEdit->clear();
}
