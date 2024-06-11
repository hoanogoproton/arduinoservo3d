/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *degree0;
    QPushButton *degree45;
    QPushButton *degree90;
    QSlider *horizontalSlider;
    QLabel *label_2;
    QPushButton *recordButton;
    QPushButton *pushButton_2;
    QSlider *slider2;
    QLabel *label_3;
    QSlider *slider3;
    QLabel *label_4;
    QLabel *label;
    QTextEdit *commandTextEdit;
    QLabel *commandlist;
    QLabel *label_5;
    QSlider *slider4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        degree0 = new QPushButton(Dialog);
        degree0->setObjectName(QString::fromUtf8("degree0"));
        degree0->setGeometry(QRect(30, 120, 80, 24));
        degree45 = new QPushButton(Dialog);
        degree45->setObjectName(QString::fromUtf8("degree45"));
        degree45->setGeometry(QRect(120, 120, 80, 24));
        degree90 = new QPushButton(Dialog);
        degree90->setObjectName(QString::fromUtf8("degree90"));
        degree90->setGeometry(QRect(210, 120, 80, 24));
        horizontalSlider = new QSlider(Dialog);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(30, 180, 261, 21));
        QFont font;
        font.setBold(false);
        horizontalSlider->setFont(font);
        horizontalSlider->setAcceptDrops(false);
        horizontalSlider->setAutoFillBackground(false);
        horizontalSlider->setMaximum(180);
        horizontalSlider->setTracking(false);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::NoTicks);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 180, 63, 20));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        recordButton = new QPushButton(Dialog);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));
        recordButton->setGeometry(QRect(30, 70, 80, 24));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 70, 80, 24));
        slider2 = new QSlider(Dialog);
        slider2->setObjectName(QString::fromUtf8("slider2"));
        slider2->setGeometry(QRect(30, 230, 261, 21));
        slider2->setFont(font);
        slider2->setAcceptDrops(false);
        slider2->setMaximum(180);
        slider2->setTracking(false);
        slider2->setOrientation(Qt::Horizontal);
        slider2->setInvertedAppearance(false);
        slider2->setInvertedControls(false);
        slider2->setTickPosition(QSlider::NoTicks);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 230, 63, 20));
        label_3->setFont(font1);
        slider3 = new QSlider(Dialog);
        slider3->setObjectName(QString::fromUtf8("slider3"));
        slider3->setGeometry(QRect(30, 280, 261, 21));
        slider3->setFont(font);
        slider3->setAcceptDrops(false);
        slider3->setMaximum(180);
        slider3->setTracking(false);
        slider3->setOrientation(Qt::Horizontal);
        slider3->setInvertedAppearance(false);
        slider3->setInvertedControls(false);
        slider3->setTickPosition(QSlider::NoTicks);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(310, 280, 63, 20));
        label_4->setFont(font1);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 10, 301, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(19);
        font2.setBold(true);
        label->setFont(font2);
        commandTextEdit = new QTextEdit(Dialog);
        commandTextEdit->setObjectName(QString::fromUtf8("commandTextEdit"));
        commandTextEdit->setGeometry(QRect(30, 410, 291, 91));
        commandlist = new QLabel(Dialog);
        commandlist->setObjectName(QString::fromUtf8("commandlist"));
        commandlist->setGeometry(QRect(30, 380, 101, 16));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 330, 63, 20));
        label_5->setFont(font1);
        slider4 = new QSlider(Dialog);
        slider4->setObjectName(QString::fromUtf8("slider4"));
        slider4->setGeometry(QRect(30, 330, 261, 21));
        slider4->setFont(font);
        slider4->setAcceptDrops(false);
        slider4->setMaximum(180);
        slider4->setTracking(false);
        slider4->setOrientation(Qt::Horizontal);
        slider4->setInvertedAppearance(false);
        slider4->setInvertedControls(false);
        slider4->setTickPosition(QSlider::NoTicks);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        degree0->setText(QCoreApplication::translate("Dialog", "0 degree", nullptr));
        degree45->setText(QCoreApplication::translate("Dialog", "45 degree", nullptr));
        degree90->setText(QCoreApplication::translate("Dialog", "90 degree", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        recordButton->setText(QCoreApplication::translate("Dialog", "Record", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Play", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "ROBOT CONTROLLER", nullptr));
        commandlist->setText(QCoreApplication::translate("Dialog", "Command list:", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
