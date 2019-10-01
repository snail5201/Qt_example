/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPlainTextEdit *plainTextEdit;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(501, 349);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 191, 23));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 20, 75, 23));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 50, 75, 23));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(330, 130, 75, 23));
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 130, 191, 23));
        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 170, 441, 171));
        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(30, 80, 201, 31));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(300, 80, 171, 20));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 80, 31, 21));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "QHostInfo\350\216\267\345\217\226\344\270\273\346\234\272\345\234\260\345\235\200\345\222\214IP\345\234\260\345\235\200", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "QHostInfo\346\237\245\346\211\276\345\237\237\345\220\215\347\232\204IP\345\234\260\345\235\200", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "\345\217\252\346\230\276\347\244\272 IPv4 \345\215\217\350\256\256\345\234\260\345\235\200", nullptr));
        lineEdit->setText(QCoreApplication::translate("Dialog", "www.163.com", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\345\237\237\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
