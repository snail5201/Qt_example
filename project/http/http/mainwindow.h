#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QFile>
#include<QDir>
#include<QMessageBox>
#include<QUrl>
#include<QDesktopServices>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QNetworkAccessManager networkManager;   //网络管理
    QNetworkReply *reply;   //网络响应
    QFile *downloadedFile;  //下载保存的临时文件
private slots:
    //自定义槽函数
    void on_finished();
    void on_readyRead();
    void on_downloadProgress(qint64 bytesRead,qint64 totalByte);
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
