#include "widget.h"
#include "ui_widget.h"
#include<QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setPalette(QPalette(Qt::white));    //设置窗口为白色背景,palette为调色板类，setPalette()为改变调色板的颜色
    setAutoFillBackground(true);        //设置窗体自动填充背景
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);     //创建QPainter对象
    painter.setRenderHint(QPainter::Antialiasing);  //如果on为true，则在画笔上设置给定的渲染提示；否则清除渲染提示。
    painter.setRenderHint(QPainter::TextAntialiasing);//setRenderHint()函数：控制渲染质量
    int W=this->width();
    int H=this->height();   //绘图区的高度
    QRect rect(W/4,H/4,W/2,H/2);    //中间区域矩形框
    //设置画笔
    QPen pen;
    pen.setWidth(3);    //线宽
    pen.setColor(Qt::red);  //划线颜色
    pen.setStyle(Qt::SolidLine);    //线的样式，实线、虚线等
    pen.setCapStyle(Qt::FlatCap);   //线端点样式
    pen.setJoinStyle(Qt::BevelJoin);//线的连接点样式
    painter.setPen(pen);
    //设置画刷
    QBrush brush;
    brush.setColor(Qt::yellow);
    brush.setStyle(Qt::SolidPattern);//画刷填充样式
    painter.setBrush(brush);
    //绘图
    painter.drawRect(rect);
}
