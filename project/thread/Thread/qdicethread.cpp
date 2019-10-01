#include "qdicethread.h"
#include<QTime>

QDiceThread::QDiceThread()
{

}

void QDiceThread::diceBegin()
{
    //开始掷骰子
    m_Paused=false;
}

void QDiceThread::dicePause()
{
    //暂停掷骰子
    m_Paused=true;
}

void QDiceThread::stopThread()
{
    //停止线程
    m_stop=true;
}

void QDiceThread::run()
{
    //线程任务
    m_stop=false;
    m_seq=0;        //掷骰子次数
    qsrand(QTime::currentTime().msec());    //随机数初始化
    while (!m_stop) {
        if(!m_Paused)
        {
            m_dicevalue=qrand();    //获取随机数
            m_dicevalue=(m_dicevalue % 6)+1;
            m_seq++;
            emit newvalue(m_seq,m_dicevalue);  //发射信号。emit+信号 表示执行到此行会自动触发槽函数(忽略emit也可以)
                                               //不用发射信号，还可以用线程同步
        }
        msleep(500);    //线程休眠500ms
    }
    quit(); //相当于exit(0),退出线程的时间循环
}
