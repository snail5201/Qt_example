#include "qmycursor.h"

QmyCursor::QmyCursor(QWidget *parent) : QWidget(parent)
{

}

void QmyCursor::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    //QRect rect(0,0,width(),height());
    //painter.setViewport(rect);  //将画家的视口矩形设置为给定的矩形
    painter.setWindow(0,0,50,50);

    QPen pen;
    pen.setWidth(1);
    pen.setColor(mColorline);
    pen.setStyle(Qt::SolidLine);
    pen.setCapStyle(Qt::FlatCap);   //不覆盖直线终点的方形直线末端。
    pen.setJoinStyle(Qt::BevelJoin);//连接样式设置
    painter.setPen(pen);

    QBrush brush;
    brush.setColor(mColorBack);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);

    painter.drawLine(0,25,50,25);
    painter.drawLine(25,0,25,50);
}

void QmyCursor::disp()
{
    update();
}
