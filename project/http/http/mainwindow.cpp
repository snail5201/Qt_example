#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    //缺省路径 按钮
    QString curPath=QDir::currentPath();
    QDir dir(curPath);
    QString sub="temp";
    dir.mkdir(sub);     //创建目录
    ui->download_path->setText(curPath+"/"+sub+"/");    //填写路径
}

void MainWindow::on_pushButton_clicked()
{
    //开始下载
    QString urlSpec = ui->url_edit->text().trimmed();   //返回从开头和结尾删除“\t”，“\n”，“\v”，“\f”，“\r”和“”的字符串。
    if(urlSpec.isEmpty())   //判断URL是否为空
    {
        QMessageBox::information(this,QStringLiteral("错误"),QStringLiteral("请指定需要下载的URL"));
        return;
    }

    QUrl newUrl = QUrl::fromUserInput(urlSpec); //返回一个有效的URL。若URL无效，则返回无效的QUrl（）
    if(!newUrl.isValid())
    {
        QMessageBox::information(this,QStringLiteral("错误"),
                                 QString(QStringLiteral("无效URL：%1 \n 错误信息： %2")).arg(urlSpec,newUrl.errorString()));
        return;
    }

    QString tempDir = ui->download_path->text().trimmed();
    if(tempDir.isEmpty())       //判断保存路径是否为空
    {
        QMessageBox::information(this,QStringLiteral("错误"),QStringLiteral("请指定保存下载的目录"));
        return;
    }

    QString fullFileName = tempDir+newUrl.fileName();
    if(QFile::exists(fullFileName))     //判断文件是否已经存在
    {
        QFile::remove(fullFileName);
    }

    downloadedFile = new QFile(fullFileName);
    if(!downloadedFile->open(QIODevice::WriteOnly))     //打开下载保存的临时文件
    {
        QMessageBox::information(this,QStringLiteral("错误"),QStringLiteral("临时文件打开错误"));
        return;
    }

    ui->pushButton->setEnabled(false);
    reply=networkManager.get(QNetworkRequest(newUrl));      //网络响应

    connect(reply,SIGNAL(finished()),this,SLOT(on_finished()));
    connect(reply,SIGNAL(readyRead()),this,SLOT(on_readyRead()));   //在缓冲区有新下载的数据等待读取时，发射此信号
    connect(reply,SIGNAL(downloadProgress(qint64,qint64)),
            this,SLOT(on_downloadProgress(qint64,qint64)));
}

void MainWindow::on_readyRead()
{
    //读取下载的数据
    downloadedFile->write(reply->readAll());//readAll():从设备读取所有剩余数据，并将其作为字节数组返回。
}

void MainWindow::on_downloadProgress(qint64 bytesRead,qint64 totalBytes)
{
    //下载进度
    ui->progressBar->setMaximum(totalBytes);//此属性保存进度条的最大值
    ui->progressBar->setValue(bytesRead);   //此属性保存进度条的当前值
}

void MainWindow::on_finished()
{
    //网络响应结束
    QFileInfo fileInfo;
    fileInfo.setFile(downloadedFile->fileName());
    downloadedFile->close();
    delete downloadedFile;
    downloadedFile = Q_NULLPTR;
    reply->deleteLater();
    reply = Q_NULLPTR;
    if(ui->checkBox->isChecked())
    {
        QDesktopServices::openUrl(QUrl::fromLocalFile(
                                      fileInfo.absolutePath()));
    }

    ui->pushButton->setEnabled(true);
}
