#include "qmyvideowidget.h"


QmyVideoWidget::QmyVideoWidget(QWidget *parent):QVideoWidget(parent)
{
   // parent = Q_NULLPTR;
   //videoWidget->setFixedSize(400,400);
}

void QmyVideoWidget::keyPressEvent(QKeyEvent *event)
{
    //按键事件，ESC退出全屏状态
    if((event->key() == Qt::Key_Escape)&&(isFullScreen()))
    {
        setFullScreen(false);   //此属性保留视频显示是限于窗口还是全屏显示,此处位窗口显示
        event->accept();        //接收事件
        QVideoWidget::keyPressEvent(event);
    }
}

void QmyVideoWidget::mousePressEvent(QMouseEvent *event)
{
    //鼠标事件，单击控制暂停和继续播放
    if(event->button() == Qt::LeftButton)
    {
        if(thePlayer->state() == QMediaPlayer::PlayingState)
            thePlayer->pause();
        else
            thePlayer->play();
    }

    QVideoWidget::mousePressEvent(event);
}

void QmyVideoWidget::setMediaPlayer(QMediaPlayer *player)
{
    //设置播放器
    thePlayer = player;
}
