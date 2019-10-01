#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>
#include"qdicethread.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QDiceThread threadA;
protected:
    void closeEvent(QCloseEvent *event);    //重定义
public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
private slots:
    //自定义槽函数
    void onthreadA_started();
    void onthreadA_finished();
    void onthreadA_newValue(int seq,int diceValue);
    void on_pushButton_clicked();

    void on_pushButton_close_clicked();

    void on_pushButton_start_clicked();

    void on_pushButton_stop_clicked();

    void on_pushButton_empty_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
