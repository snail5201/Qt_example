#ifndef QMYBATTERY_H
#define QMYBATTERY_H

#include <QWidget>
#include<QColor>
#include<QPainter>

class QmyBattery : public QWidget
{
    Q_OBJECT
private:
    QColor mColorBack=Qt::white;    //背景颜色为白色
    QColor mColorBorder=Qt::black;  //电池边框颜色
    QColor mColorPower=Qt::green;   //电池柱颜色
    QColor mColorWarning=Qt::red;   //电池短缺时的颜色
    int mPowerLevel=60;             //电量1-100
    int mWarnLevel=20;              //电量低警示阈值
protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
public:
    explicit QmyBattery(QWidget *parent = nullptr);
    void setPowerLevel(int pow);    //设置当前电量
    int powerLevel();
    void setWarnLevel(int warn);    //设置电量低阈值
    int warnLevel();
   // QSize sizeHint();               //缺省大小
signals:
    void powerLevelChanged(int);    //在当前电量值改变时发射此信号
public slots:
};

#endif // QMYBATTERY_H
