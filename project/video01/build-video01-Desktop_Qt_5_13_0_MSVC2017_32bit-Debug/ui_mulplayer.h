/********************************************************************************
** Form generated from reading UI file 'mulplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULPLAYER_H
#define UI_MULPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MulPlayer
{
public:
    QWidget *centralWidget;
    QPushButton *openFileBtn;
    QPushButton *playBtn;
    QPushButton *stopBtn;
    QPushButton *fullScrBtn;
    QSlider *progressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MulPlayer)
    {
        if (MulPlayer->objectName().isEmpty())
            MulPlayer->setObjectName(QString::fromUtf8("MulPlayer"));
        MulPlayer->resize(545, 361);
        centralWidget = new QWidget(MulPlayer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        openFileBtn = new QPushButton(centralWidget);
        openFileBtn->setObjectName(QString::fromUtf8("openFileBtn"));
        openFileBtn->setGeometry(QRect(10, 280, 75, 23));
        playBtn = new QPushButton(centralWidget);
        playBtn->setObjectName(QString::fromUtf8("playBtn"));
        playBtn->setGeometry(QRect(150, 280, 75, 23));
        stopBtn = new QPushButton(centralWidget);
        stopBtn->setObjectName(QString::fromUtf8("stopBtn"));
        stopBtn->setGeometry(QRect(290, 280, 75, 23));
        fullScrBtn = new QPushButton(centralWidget);
        fullScrBtn->setObjectName(QString::fromUtf8("fullScrBtn"));
        fullScrBtn->setGeometry(QRect(440, 280, 75, 23));
        progressBar = new QSlider(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 250, 481, 20));
        progressBar->setOrientation(Qt::Horizontal);
        MulPlayer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MulPlayer);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 545, 23));
        MulPlayer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MulPlayer);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MulPlayer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MulPlayer);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MulPlayer->setStatusBar(statusBar);

        retranslateUi(MulPlayer);

        QMetaObject::connectSlotsByName(MulPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *MulPlayer)
    {
        MulPlayer->setWindowTitle(QCoreApplication::translate("MulPlayer", "MulPlayer", nullptr));
        openFileBtn->setText(QCoreApplication::translate("MulPlayer", "open", nullptr));
        playBtn->setText(QCoreApplication::translate("MulPlayer", "play", nullptr));
        stopBtn->setText(QCoreApplication::translate("MulPlayer", "stop", nullptr));
        fullScrBtn->setText(QCoreApplication::translate("MulPlayer", "fullScr", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MulPlayer: public Ui_MulPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULPLAYER_H
