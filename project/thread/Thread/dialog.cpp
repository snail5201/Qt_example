#include "dialog.h"
#include "ui_dialog.h"
#include<QTextCodec>

#pragma execution_character_set("utf-8")

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //线程有两个信号：started()线程开始执行，run()函数被调用之前发射此信号；finished()线程结束时发射此信号
    connect(&threadA,SIGNAL(started()),this,SLOT(onthreadA_started()));
    connect(&threadA,SIGNAL(finished()),this,SLOT(onthreadA_finished()));
    connect(&threadA,SIGNAL(newvalue(int,int)),
            this,SLOT(onthreadA_newValue(int,int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onthreadA_started()
{
    ui->LabA->setText("Thread状态：thread started");
}

void Dialog::onthreadA_finished()
{
    ui->LabA->setText("Thread状态：thread fineshed");
}

void Dialog::onthreadA_newValue(int seq,int diceValue)
{
    QString str=QString::asprintf("第 %d 次掷骰子，点数为：%d",seq,diceValue);
    ui->plainTextEdit->appendPlainText(str);

    QPixmap pic;
    QString filename=QString::asprintf(":/new/prefix1/image/d%d.jpg",diceValue);
    pic.load(filename);
    ui->lab_pic->setPixmap(pic);
}

void Dialog::on_pushButton_clicked()
{
    //启动线程
    threadA.start();    //start()函数内部调用run()函数
    ui->pushButton->setEnabled(false);
    ui->pushButton_stop->setEnabled(true);
    ui->pushButton_start->setEnabled(true);
    ui->pushButton_close->setEnabled(true);
}

void Dialog::on_pushButton_close_clicked()
{
    //结束线程
    threadA.stopThread();   //结束线程run()函数
    ui->pushButton->setEnabled(true);
    ui->pushButton_stop->setEnabled(false);
    ui->pushButton_start->setEnabled(false);
    ui->pushButton_close->setEnabled(false);
}

void Dialog::on_pushButton_start_clicked()
{
    //开始掷骰子
    threadA.diceBegin();
    ui->pushButton_stop->setEnabled(true);
    ui->pushButton_start->setEnabled(false);
}

void Dialog::on_pushButton_stop_clicked()
{
    //暂停掷骰子
    threadA.dicePause();
    ui->pushButton_stop->setEnabled(false);
    ui->pushButton_start->setEnabled(true);
}

void Dialog::on_pushButton_empty_clicked()
{
    //清空文本
    ui->plainTextEdit->clear();
}

void Dialog::closeEvent(QCloseEvent *event)
{
    //窗口关闭事件，必须结束线程
    if(threadA.isRunning())
    {
        threadA.stopThread();
        threadA.wait(); //阻止线程执行，直到线程结束(run()函数返回)，或
                        //等待时间超过time毫秒
    }
    event->accept();//这个类的事件处理函数想要处理这个事件;如果一个事件处理函数
                    //调用了一个事件对象的accept()函数，这个事件就不会被继续传播给其父组件；
}
