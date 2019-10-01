#ifndef QMYVIDEOWIDGET_H
#define QMYVIDEOWIDGET_H

#include<QVideoWidget>
#include<QMediaPlayer>
#include<QKeyEvent>


class QmyVideoWidget : public QVideoWidget
{
private:
    QMediaPlayer *thePlayer;    //关联的视频播放器
protected:
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
public:
    QmyVideoWidget(QWidget *parent = Q_NULLPTR);
    void setMediaPlayer(QMediaPlayer *player);
};

#endif // QMYVIDEOWIDGET_H
