#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);     //创建视频播放器
    player->setNotifyInterval(2000);    //信息更新周期2000ms
    player->setVideoOutput(ui->widget); //视频显示组件
    ui->widget->setMediaPlayer(player); //设置显示组件的关联播放器


    connect(player,SIGNAL(stateChanged(QMediaPlayer::State)),
            this,SLOT(onStateChanged(QMediaPlayer::State)));
    connect(player,SIGNAL(positionChanged(qint64)),
            this,SLOT(onPositionChanged(qint64)));
    connect(player,SIGNAL(durationChanged(qint64)),
            this,SLOT(onDurationChange(qint64)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onStateChanged(QMediaPlayer::State state)
{
    //播放器状态变化
    ui->play_pushButton->setEnabled(!(state == QMediaPlayer::PlayingState));
    ui->pause_pushButton->setEnabled(state==QMediaPlayer::PlayingState);
    ui->stop_pushButton->setEnabled(state==QMediaPlayer::PlayingState);
}

void MainWindow::onDurationChange(qint64 duration)
{
    //文件时长变化
    ui->time_slider->setMaximum(duration);
    int secs=duration/1000; //秒
    int mins=secs/60;       //分钟
    secs=secs%60;           //余数秒
    durationTime=QString::asprintf("%d:%d",mins,secs);
    ui->time_label->setText(positionTime+"/"+durationTime);
}

void MainWindow::onPositionChanged(qint64 position)
{
    //文件播放位置变化
    if(ui->time_slider->isSliderDown()) //如果正在拖动滑条，退出
        return;

    ui->time_slider->setSliderPosition(position);
    int secs=position/1000; //秒
    int mins=secs/60;       //分钟
    secs=secs % 60;         //余数秒

    positionTime=QString::asprintf("%d:%d",mins,secs);
    ui->time_label->setText(positionTime+"/"+durationTime);
}



void MainWindow::on_file_pushButton_clicked()
{
    //打开文件
    QString curPath=QDir::homePath();   //获取系统当前目录
    QString dlgTitle=QStringLiteral("选择视频文件");  //对话框标题
    QString filter = QStringLiteral("wmv文件(*.wmv);;mp4文件(*.mp4);;所有文件(*.*)");
    QString aFile=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(aFile.isEmpty())
        return;

    QFileInfo fileInfo(aFile);
    ui->curr_label->setText(fileInfo.fileName());
    player->setMedia(QUrl::fromLocalFile(aFile));   //设置播放文件
   // player->play();
}

void MainWindow::on_play_pushButton_clicked()
{
    //播放
    player->play();
    ui->widget->setFullScreen(false);
}

void MainWindow::on_pause_pushButton_clicked()
{
    //暂停
    player->pause();
}

void MainWindow::on_stop_pushButton_clicked()
{
    //停止
    player->stop();
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    //调节音量
    player->setVolume(value);
}


void MainWindow::on_time_slider_valueChanged(int value)
{
    //播放位置
    player->setPosition(value);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->widget->setFullScreen(true);
}
