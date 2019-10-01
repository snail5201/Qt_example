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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_start;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_stop;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_close;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_empty;
    QLabel *LabA;
    QPlainTextEdit *plainTextEdit;
    QLabel *lab_pic;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(487, 363);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 451, 51));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 451, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_start = new QPushButton(horizontalLayoutWidget);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));

        horizontalLayout->addWidget(pushButton_start);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButton_stop = new QPushButton(horizontalLayoutWidget);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));

        horizontalLayout->addWidget(pushButton_stop);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_close = new QPushButton(horizontalLayoutWidget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));

        horizontalLayout->addWidget(pushButton_close);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_empty = new QPushButton(horizontalLayoutWidget);
        pushButton_empty->setObjectName(QString::fromUtf8("pushButton_empty"));

        horizontalLayout->addWidget(pushButton_empty);

        LabA = new QLabel(Dialog);
        LabA->setObjectName(QString::fromUtf8("LabA"));
        LabA->setGeometry(QRect(30, 330, 291, 16));
        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 80, 311, 241));
        lab_pic = new QLabel(Dialog);
        lab_pic->setObjectName(QString::fromUtf8("lab_pic"));
        lab_pic->setGeometry(QRect(350, 90, 111, 111));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "\347\272\277\347\250\213", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\345\220\257\345\212\250\347\272\277\347\250\213", nullptr));
        pushButton_start->setText(QCoreApplication::translate("Dialog", "\345\274\200\345\247\213", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("Dialog", "\346\232\202\345\201\234", nullptr));
        pushButton_close->setText(QCoreApplication::translate("Dialog", "\347\273\223\346\235\237\347\272\277\347\250\213", nullptr));
        pushButton_empty->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        LabA->setText(QCoreApplication::translate("Dialog", "Thread \347\212\266\346\200\201\357\274\232", nullptr));
        lab_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
