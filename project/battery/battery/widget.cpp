#include "widget.h"
#include "ui_widget.h"
#include "qmybattery.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //ui->widget->setAttribute(Qt::WA_TranslucentBackground);     //透明
    ui->widget_2->disp();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_horizontalSlider_valueChanged(int value)
{
    //滑动改变电量值
    ui->widget->setPowerLevel(value);
    QString str=QStringLiteral("当前电量：")+QString::asprintf("%d %%",value);
    ui->label->setText(str);
}
