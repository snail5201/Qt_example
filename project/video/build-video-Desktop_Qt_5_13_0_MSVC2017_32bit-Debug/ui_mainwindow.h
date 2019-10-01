/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qmyvideowidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QmyVideoWidget *widget;
    QPushButton *pushButton_5;
    QSlider *horizontalSlider;
    QSlider *time_slider;
    QLabel *time_label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *file_pushButton;
    QPushButton *play_pushButton;
    QPushButton *pause_pushButton;
    QPushButton *stop_pushButton;
    QLabel *curr_label;
    QLabel *curr_label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(672, 405);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QmyVideoWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 651, 281));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(590, 290, 75, 23));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(450, 290, 131, 19));
        horizontalSlider->setValue(99);
        horizontalSlider->setOrientation(Qt::Horizontal);
        time_slider = new QSlider(centralWidget);
        time_slider->setObjectName(QString::fromUtf8("time_slider"));
        time_slider->setGeometry(QRect(90, 330, 471, 20));
        time_slider->setOrientation(Qt::Horizontal);
        time_label = new QLabel(centralWidget);
        time_label->setObjectName(QString::fromUtf8("time_label"));
        time_label->setGeometry(QRect(580, 330, 81, 16));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 290, 320, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        file_pushButton = new QPushButton(layoutWidget);
        file_pushButton->setObjectName(QString::fromUtf8("file_pushButton"));

        horizontalLayout->addWidget(file_pushButton);

        play_pushButton = new QPushButton(layoutWidget);
        play_pushButton->setObjectName(QString::fromUtf8("play_pushButton"));

        horizontalLayout->addWidget(play_pushButton);

        pause_pushButton = new QPushButton(layoutWidget);
        pause_pushButton->setObjectName(QString::fromUtf8("pause_pushButton"));

        horizontalLayout->addWidget(pause_pushButton);

        stop_pushButton = new QPushButton(layoutWidget);
        stop_pushButton->setObjectName(QString::fromUtf8("stop_pushButton"));

        horizontalLayout->addWidget(stop_pushButton);

        curr_label = new QLabel(centralWidget);
        curr_label->setObjectName(QString::fromUtf8("curr_label"));
        curr_label->setGeometry(QRect(10, 330, 81, 20));
        curr_label_2 = new QLabel(centralWidget);
        curr_label_2->setObjectName(QString::fromUtf8("curr_label_2"));
        curr_label_2->setGeometry(QRect(420, 290, 31, 20));
        MainWindow->setCentralWidget(centralWidget);
        pushButton_5->raise();
        horizontalSlider->raise();
        time_slider->raise();
        time_label->raise();
        layoutWidget->raise();
        curr_label->raise();
        curr_label_2->raise();
        widget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 672, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\217", nullptr));
        time_label->setText(QCoreApplication::translate("MainWindow", "00:00/00:00", nullptr));
        file_pushButton->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        play_pushButton->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276", nullptr));
        pause_pushButton->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
        stop_pushButton->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        curr_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        curr_label_2->setText(QCoreApplication::translate("MainWindow", "\351\237\263\351\207\217\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
