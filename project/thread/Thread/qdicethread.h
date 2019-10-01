#ifndef QDICETHREAD_H
#define QDICETHREAD_H

#include<QThread>
class QDiceThread:public QThread
{
    Q_OBJECT
private:
    int m_seq=0;            //掷骰子次数序号
    int m_dicevalue;        //骰子点数
    bool m_Paused=true;     //暂停
    bool m_stop=false;      //停止
protected:
    void run() Q_DECL_OVERRIDE;
public:
    QDiceThread();
    void diceBegin();       //掷一次骰子
    void dicePause();       //暂停
    void stopThread();      //结束线程
signals:
    void newvalue(int seq,int diceValue);   //产生新点数的信号
};

#endif // QDICETHREAD_H
