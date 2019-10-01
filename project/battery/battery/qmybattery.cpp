#include "qmybattery.h"

QmyBattery::QmyBattery(QWidget *parent) : QWidget(parent)
{

}

void QmyBattery::paintEvent(QPaintEvent *event)
{
    //界面组件的绘制
    Q_UNUSED(event);

    QPainter painter(this);
    QRect rect(0,0,width(),height());
    painter.setViewport(rect);  //将画家的视口矩形设置为给定的矩形
    painter.setWindow(0,0,120,50);  //设置窗口大小，逻辑坐标；该窗口指定逻辑坐标系。viewport（）指定设备坐标系。
    //设置渲染,消除图片边缘凹凸的锯齿
    painter.setRenderHint(QPainter::Antialiasing);//表示引擎应尽可能对图元的边缘进行抗锯齿。
    painter.setRenderHint(QPainter::TextAntialiasing);//表示引擎应尽可能对文本进行抗锯齿。

    //绘制电池边框和背景
    QPen pen;
    pen.setWidth(2);
    pen.setColor(mColorBorder);
    pen.setStyle(Qt::SolidLine);
    pen.setCapStyle(Qt::FlatCap);   //不覆盖直线终点的方形直线末端。
    pen.setJoinStyle(Qt::BevelJoin);//连接样式设置
    painter.setPen(pen);

    QBrush brush;
    brush.setColor(mColorBack);
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);

    rect.setRect(1,1,109,48);
    painter.drawRect(rect);     //绘制电池边框

    //绘制电池正极头
    brush.setColor(mColorBorder);
    painter.setBrush(brush);

    rect.setRect(110,15,10,20);
    painter.drawRect(rect);     //画电池正极头

    //设置电池柱的颜色
    if(mPowerLevel>mWarnLevel)
    {
        //正常颜色电量柱
        brush.setColor(mColorPower);
        pen.setColor(mColorPower);
    }
    else
    {
        //电量低电量柱
        brush.setColor(mColorWarning);
        pen.setColor(mColorWarning);
    }

    painter.setBrush(brush);
    painter.setPen(pen);

    if(mPowerLevel>0)
    {
        rect.setRect(5,5,mPowerLevel,40);   //以逻辑坐标为准
        painter.drawRect(rect);         //画电池柱
    }

    //绘制电量百分比文字
    QFontMetrics textSize(this->font());    //计算给定字体的字符和字符串的大小;font()函数保存当前为小部件设置的字体
    QString powStr=QString::asprintf("%d%%",mPowerLevel);
    QRect textRect=textSize.boundingRect(powStr);   //得到字符串的rect
    painter.setFont(this->font());  //将画家的字体设置为给定的字体。
    pen.setColor(mColorBorder);
    painter.setPen(pen);
    painter.drawText(55-textRect.width()/2,23+textRect.height()/2,powStr);
    //painter.drawText(46,29,powStr);

}

void QmyBattery::setPowerLevel(int pow)
{
    //设置当前电量值
    mPowerLevel = pow;
    emit powerLevelChanged(pow);
    repaint();
}

int QmyBattery::powerLevel()
{
    //返回当前电量值
    return mPowerLevel;
}

void QmyBattery::setWarnLevel(int warn)
{
    //设置电量低阈值
    mWarnLevel=warn;
    repaint();
}

int QmyBattery::warnLevel()
{
    //返回电量低阈值
    return  mWarnLevel;
}

/*QSize QmyBattery::sizeHint()
{
    //缺省大小，调整比例
    int H=this->height();
    int W=H*12/5;
    QSize size(W,H);
    return size;
}*/
