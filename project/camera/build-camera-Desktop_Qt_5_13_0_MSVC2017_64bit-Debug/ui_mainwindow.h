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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qcameraviewfinder.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_open;
    QAction *action_close;
    QAction *action_capture;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QCameraViewfinder *widget;
    QmyCursor *widget_2;
    QGroupBox *groupBox_2;
    QLabel *label;
    QComboBox *comboBox_camera;
    QGroupBox *groupBox_3;
    QLabel *label_capture;
    QLabel *label_imageinfo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(789, 491);
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QString::fromUtf8("action_open"));
        action_close = new QAction(MainWindow);
        action_close->setObjectName(QString::fromUtf8("action_close"));
        action_capture = new QAction(MainWindow);
        action_capture->setObjectName(QString::fromUtf8("action_capture"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 461, 351));
        widget = new QCameraViewfinder(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 451, 331));
        widget_2 = new QmyCursor(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(210, 150, 21, 21));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 360, 461, 61));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 71, 16));
        comboBox_camera = new QComboBox(groupBox_2);
        comboBox_camera->setObjectName(QString::fromUtf8("comboBox_camera"));
        comboBox_camera->setGeometry(QRect(80, 20, 151, 22));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(470, 20, 301, 251));
        label_capture = new QLabel(groupBox_3);
        label_capture->setObjectName(QString::fromUtf8("label_capture"));
        label_capture->setGeometry(QRect(10, 10, 281, 241));
        label_imageinfo = new QLabel(centralWidget);
        label_imageinfo->setObjectName(QString::fromUtf8("label_imageinfo"));
        label_imageinfo->setGeometry(QRect(470, 290, 301, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 789, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(action_open);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_close);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_capture);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        action_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", nullptr));
        action_capture->setText(QCoreApplication::translate("MainWindow", "\346\212\223\345\233\276", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\351\242\204\350\247\210", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\350\256\276\345\244\207\357\274\232", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\210\252\345\233\276", nullptr));
        label_capture->setText(QString());
        label_imageinfo->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\344\277\235\345\255\230\344\270\272\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
