#ifndef QMYCURSOR_H
#define QMYCURSOR_H

#include <QWidget>
#include<QPainter>

class QmyCursor : public QWidget
{
    Q_OBJECT
public:
    explicit QmyCursor(QWidget *parent = nullptr);
    void disp();
private:
    QColor mColorBack=Qt::transparent;   //背景颜色为透明
    QColor mColorline=Qt::red;
protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
signals:

public slots:
};

#endif // QMYCURSOR_H
