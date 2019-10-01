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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *url_edit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *download_path;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QProgressBar *progressBar;
    QCheckBox *checkBox;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(506, 145);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 31, 16));
        url_edit = new QLineEdit(centralWidget);
        url_edit->setObjectName(QString::fromUtf8("url_edit"));
        url_edit->setGeometry(QRect(50, 10, 341, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 10, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 101, 16));
        download_path = new QLineEdit(centralWidget);
        download_path->setObjectName(QString::fromUtf8("download_path"));
        download_path->setGeometry(QRect(130, 50, 261, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 50, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 81, 16));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(130, 90, 261, 23));
        progressBar->setValue(0);
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(410, 90, 81, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 506, 23));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "URL\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275\346\226\207\344\273\266\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\347\274\272\347\234\201\350\267\257\345\276\204", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\344\270\213\350\275\275\350\277\233\345\272\246\357\274\232", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\256\214\346\210\220\345\220\216\346\211\223\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
