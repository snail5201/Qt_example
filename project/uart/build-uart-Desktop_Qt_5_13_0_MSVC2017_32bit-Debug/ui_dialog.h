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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPlainTextEdit *receive_plainTextEdit;
    QPlainTextEdit *send_plainTextEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QComboBox *port_comboBox;
    QComboBox *bitrate_comboBox;
    QComboBox *data_comboBox;
    QComboBox *check_comboBox;
    QComboBox *stop_comboBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(611, 446);
        receive_plainTextEdit = new QPlainTextEdit(Dialog);
        receive_plainTextEdit->setObjectName(QString::fromUtf8("receive_plainTextEdit"));
        receive_plainTextEdit->setGeometry(QRect(190, 30, 401, 251));
        send_plainTextEdit = new QPlainTextEdit(Dialog);
        send_plainTextEdit->setObjectName(QString::fromUtf8("send_plainTextEdit"));
        send_plainTextEdit->setGeometry(QRect(190, 320, 401, 91));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 300, 54, 12));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 10, 54, 12));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 340, 75, 23));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 380, 75, 23));
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 40, 50, 271));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 30, 71, 301));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        port_comboBox = new QComboBox(widget1);
        port_comboBox->addItem(QString());
        port_comboBox->addItem(QString());
        port_comboBox->addItem(QString());
        port_comboBox->addItem(QString());
        port_comboBox->addItem(QString());
        port_comboBox->addItem(QString());
        port_comboBox->addItem(QString());
        port_comboBox->addItem(QString());
        port_comboBox->setObjectName(QString::fromUtf8("port_comboBox"));

        verticalLayout_2->addWidget(port_comboBox);

        bitrate_comboBox = new QComboBox(widget1);
        bitrate_comboBox->addItem(QString());
        bitrate_comboBox->setObjectName(QString::fromUtf8("bitrate_comboBox"));

        verticalLayout_2->addWidget(bitrate_comboBox);

        data_comboBox = new QComboBox(widget1);
        data_comboBox->addItem(QString());
        data_comboBox->setObjectName(QString::fromUtf8("data_comboBox"));

        verticalLayout_2->addWidget(data_comboBox);

        check_comboBox = new QComboBox(widget1);
        check_comboBox->addItem(QString());
        check_comboBox->setObjectName(QString::fromUtf8("check_comboBox"));

        verticalLayout_2->addWidget(check_comboBox);

        stop_comboBox = new QComboBox(widget1);
        stop_comboBox->addItem(QString());
        stop_comboBox->setObjectName(QString::fromUtf8("stop_comboBox"));

        verticalLayout_2->addWidget(stop_comboBox);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\345\217\221\351\200\201\347\253\257\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\346\216\245\346\224\266\347\253\257\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\345\217\221\351\200\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\344\270\262\345\217\243\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        port_comboBox->setItemText(0, QCoreApplication::translate("Dialog", "COM1", nullptr));
        port_comboBox->setItemText(1, QCoreApplication::translate("Dialog", "com2", nullptr));
        port_comboBox->setItemText(2, QCoreApplication::translate("Dialog", "com3", nullptr));
        port_comboBox->setItemText(3, QCoreApplication::translate("Dialog", "com4", nullptr));
        port_comboBox->setItemText(4, QCoreApplication::translate("Dialog", "com5", nullptr));
        port_comboBox->setItemText(5, QCoreApplication::translate("Dialog", "com6", nullptr));
        port_comboBox->setItemText(6, QCoreApplication::translate("Dialog", "com7", nullptr));
        port_comboBox->setItemText(7, QCoreApplication::translate("Dialog", "com8", nullptr));

        bitrate_comboBox->setItemText(0, QCoreApplication::translate("Dialog", "9600", nullptr));

        data_comboBox->setItemText(0, QCoreApplication::translate("Dialog", "8", nullptr));

        check_comboBox->setItemText(0, QCoreApplication::translate("Dialog", "0", nullptr));

        stop_comboBox->setItemText(0, QCoreApplication::translate("Dialog", "1", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
