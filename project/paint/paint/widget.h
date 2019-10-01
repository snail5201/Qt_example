#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;    //Q_DECL_OVERRIDE宏表示这个函数是对父类虚函数的重载
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
