#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMediaPlayer>
#include"qmyvideowidget.h"
#include<QDir>
#include<QFileDialog>
#include<QVideoWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMediaPlayer *player;   //视频播放器
    QString durationTime;
    QString positionTime;
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    //自定义槽函数
    void onStateChanged(QMediaPlayer::State state);
    void onDurationChange(qint64 duration);
    void onPositionChanged(qint64 position);

    void on_file_pushButton_clicked();

    void on_play_pushButton_clicked();

    void on_pause_pushButton_clicked();

    void on_stop_pushButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_time_slider_valueChanged(int value);

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
