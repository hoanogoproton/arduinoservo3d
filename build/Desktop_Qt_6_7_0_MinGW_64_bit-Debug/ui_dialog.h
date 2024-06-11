/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
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
    QGraphicsView *graphicsView;
    QLabel *commandlist_2;
    QDial *speedChange;
    QLabel *speedLabel;
    QGraphicsView *graphicsView_2;
    QLabel *xlabel;
    QLabel *ylabel;
    QLabel *zlabel;
    QLabel *xlabelnum;
    QLabel *ylabelnum;
    QLabel *zlabelnum;
    QPushButton *caculatebtn;
    QTextEdit *xedit;
    QLabel *xlabel_2;
    QLabel *zlabel_2;
    QLabel *ylabel_2;
    QPushButton *changebtn;
    QTextEdit *yedit;
    QTextEdit *zedit;
    QLabel *label_6;
    QPushButton *linepointbtn1;
    QPushButton *linepointbtn2;
    QPushButton *lineplay;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *btn3d;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1312, 601);
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        Dialog->setFont(font);
        Dialog->setLayoutDirection(Qt::LeftToRight);
        degree0 = new QPushButton(Dialog);
        degree0->setObjectName("degree0");
        degree0->setGeometry(QRect(30, 120, 80, 24));
        degree45 = new QPushButton(Dialog);
        degree45->setObjectName("degree45");
        degree45->setGeometry(QRect(120, 120, 80, 24));
        degree90 = new QPushButton(Dialog);
        degree90->setObjectName("degree90");
        degree90->setGeometry(QRect(210, 120, 80, 24));
        horizontalSlider = new QSlider(Dialog);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(30, 180, 261, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setBold(false);
        horizontalSlider->setFont(font1);
        horizontalSlider->setAcceptDrops(false);
        horizontalSlider->setAutoFillBackground(false);
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(90);
        horizontalSlider->setTracking(false);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::NoTicks);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 180, 63, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rockwell")});
        font2.setPointSize(14);
        label_2->setFont(font2);
        recordButton = new QPushButton(Dialog);
        recordButton->setObjectName("recordButton");
        recordButton->setGeometry(QRect(30, 70, 80, 24));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 70, 80, 24));
        slider2 = new QSlider(Dialog);
        slider2->setObjectName("slider2");
        slider2->setGeometry(QRect(30, 230, 261, 21));
        slider2->setFont(font1);
        slider2->setAcceptDrops(false);
        slider2->setMinimum(-60);
        slider2->setMaximum(0);
        slider2->setTracking(false);
        slider2->setOrientation(Qt::Horizontal);
        slider2->setInvertedAppearance(false);
        slider2->setInvertedControls(false);
        slider2->setTickPosition(QSlider::NoTicks);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 230, 63, 20));
        label_3->setFont(font2);
        slider3 = new QSlider(Dialog);
        slider3->setObjectName("slider3");
        slider3->setGeometry(QRect(30, 280, 261, 21));
        slider3->setFont(font1);
        slider3->setAcceptDrops(false);
        slider3->setMaximum(180);
        slider3->setTracking(false);
        slider3->setOrientation(Qt::Horizontal);
        slider3->setInvertedAppearance(false);
        slider3->setInvertedControls(false);
        slider3->setTickPosition(QSlider::NoTicks);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(310, 280, 63, 20));
        label_4->setFont(font2);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(430, 10, 301, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Verdana")});
        font3.setPointSize(19);
        font3.setBold(true);
        label->setFont(font3);
        label->setTextFormat(Qt::AutoText);
        commandTextEdit = new QTextEdit(Dialog);
        commandTextEdit->setObjectName("commandTextEdit");
        commandTextEdit->setGeometry(QRect(30, 400, 121, 91));
        commandlist = new QLabel(Dialog);
        commandlist->setObjectName("commandlist");
        commandlist->setGeometry(QRect(30, 370, 101, 16));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 330, 63, 20));
        label_5->setFont(font2);
        slider4 = new QSlider(Dialog);
        slider4->setObjectName("slider4");
        slider4->setGeometry(QRect(30, 330, 261, 21));
        slider4->setFont(font1);
        slider4->setAcceptDrops(false);
        slider4->setMaximum(100);
        slider4->setTracking(false);
        slider4->setOrientation(Qt::Horizontal);
        slider4->setInvertedAppearance(false);
        slider4->setInvertedControls(false);
        slider4->setTickPosition(QSlider::NoTicks);
        graphicsView = new QGraphicsView(Dialog);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(350, 70, 431, 221));
        commandlist_2 = new QLabel(Dialog);
        commandlist_2->setObjectName("commandlist_2");
        commandlist_2->setGeometry(QRect(180, 430, 61, 31));
        speedChange = new QDial(Dialog);
        speedChange->setObjectName("speedChange");
        speedChange->setGeometry(QRect(240, 410, 50, 64));
        speedChange->setAutoFillBackground(false);
        speedChange->setMinimum(1);
        speedChange->setMaximum(20);
        speedChange->setTracking(false);
        speedChange->setInvertedAppearance(false);
        speedChange->setInvertedControls(false);
        speedLabel = new QLabel(Dialog);
        speedLabel->setObjectName("speedLabel");
        speedLabel->setGeometry(QRect(300, 430, 41, 31));
        graphicsView_2 = new QGraphicsView(Dialog);
        graphicsView_2->setObjectName("graphicsView_2");
        graphicsView_2->setGeometry(QRect(350, 300, 431, 192));
        xlabel = new QLabel(Dialog);
        xlabel->setObjectName("xlabel");
        xlabel->setGeometry(QRect(840, 100, 51, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Rockwell")});
        font4.setPointSize(23);
        xlabel->setFont(font4);
        ylabel = new QLabel(Dialog);
        ylabel->setObjectName("ylabel");
        ylabel->setGeometry(QRect(840, 150, 51, 51));
        ylabel->setFont(font4);
        zlabel = new QLabel(Dialog);
        zlabel->setObjectName("zlabel");
        zlabel->setGeometry(QRect(840, 200, 41, 51));
        zlabel->setFont(font4);
        xlabelnum = new QLabel(Dialog);
        xlabelnum->setObjectName("xlabelnum");
        xlabelnum->setGeometry(QRect(890, 100, 111, 51));
        xlabelnum->setFont(font4);
        ylabelnum = new QLabel(Dialog);
        ylabelnum->setObjectName("ylabelnum");
        ylabelnum->setGeometry(QRect(890, 150, 111, 51));
        ylabelnum->setFont(font4);
        zlabelnum = new QLabel(Dialog);
        zlabelnum->setObjectName("zlabelnum");
        zlabelnum->setGeometry(QRect(890, 200, 111, 51));
        zlabelnum->setFont(font4);
        caculatebtn = new QPushButton(Dialog);
        caculatebtn->setObjectName("caculatebtn");
        caculatebtn->setGeometry(QRect(830, 70, 141, 24));
        xedit = new QTextEdit(Dialog);
        xedit->setObjectName("xedit");
        xedit->setGeometry(QRect(900, 350, 101, 51));
        xedit->setFont(font4);
        xedit->setFrameShape(QFrame::NoFrame);
        xlabel_2 = new QLabel(Dialog);
        xlabel_2->setObjectName("xlabel_2");
        xlabel_2->setGeometry(QRect(840, 350, 51, 51));
        xlabel_2->setFont(font4);
        zlabel_2 = new QLabel(Dialog);
        zlabel_2->setObjectName("zlabel_2");
        zlabel_2->setGeometry(QRect(840, 490, 41, 51));
        zlabel_2->setFont(font4);
        ylabel_2 = new QLabel(Dialog);
        ylabel_2->setObjectName("ylabel_2");
        ylabel_2->setGeometry(QRect(840, 420, 51, 51));
        ylabel_2->setFont(font4);
        changebtn = new QPushButton(Dialog);
        changebtn->setObjectName("changebtn");
        changebtn->setGeometry(QRect(830, 300, 141, 24));
        yedit = new QTextEdit(Dialog);
        yedit->setObjectName("yedit");
        yedit->setGeometry(QRect(900, 420, 101, 51));
        yedit->setFont(font4);
        yedit->setFrameShape(QFrame::NoFrame);
        zedit = new QTextEdit(Dialog);
        zedit->setObjectName("zedit");
        zedit->setGeometry(QRect(900, 490, 101, 51));
        zedit->setFont(font4);
        zedit->setFrameShape(QFrame::NoFrame);
        label_6 = new QLabel(Dialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1040, 60, 221, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Rockwell")});
        font5.setPointSize(20);
        label_6->setFont(font5);
        linepointbtn1 = new QPushButton(Dialog);
        linepointbtn1->setObjectName("linepointbtn1");
        linepointbtn1->setGeometry(QRect(1060, 110, 80, 24));
        linepointbtn2 = new QPushButton(Dialog);
        linepointbtn2->setObjectName("linepointbtn2");
        linepointbtn2->setGeometry(QRect(1160, 110, 80, 24));
        lineplay = new QPushButton(Dialog);
        lineplay->setObjectName("lineplay");
        lineplay->setGeometry(QRect(1110, 150, 80, 24));
        line = new QFrame(Dialog);
        line->setObjectName("line");
        line->setGeometry(QRect(1020, 50, 251, 21));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(4);
        line->setFrameShape(QFrame::Shape::HLine);
        line_2 = new QFrame(Dialog);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(1020, 180, 251, 21));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(4);
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_3 = new QFrame(Dialog);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(1010, 60, 20, 131));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(4);
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_4 = new QFrame(Dialog);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(1260, 60, 20, 131));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(4);
        line_4->setFrameShape(QFrame::Shape::VLine);
        btn3d = new QPushButton(Dialog);
        btn3d->setObjectName("btn3d");
        btn3d->setGeometry(QRect(1100, 250, 80, 51));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        degree0->setText(QCoreApplication::translate("Dialog", "RESET", nullptr));
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
        commandlist_2->setText(QCoreApplication::translate("Dialog", "SPEED:", nullptr));
        speedLabel->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        xlabel->setText(QCoreApplication::translate("Dialog", "X=", nullptr));
        ylabel->setText(QCoreApplication::translate("Dialog", "Y=", nullptr));
        zlabel->setText(QCoreApplication::translate("Dialog", "Z=", nullptr));
        xlabelnum->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        ylabelnum->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        zlabelnum->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        caculatebtn->setText(QCoreApplication::translate("Dialog", "Calculate coordinates", nullptr));
        xlabel_2->setText(QCoreApplication::translate("Dialog", "X=", nullptr));
        zlabel_2->setText(QCoreApplication::translate("Dialog", "Z=", nullptr));
        ylabel_2->setText(QCoreApplication::translate("Dialog", "Y=", nullptr));
        changebtn->setText(QCoreApplication::translate("Dialog", "Change positions", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "Line Interpolation", nullptr));
        linepointbtn1->setText(QCoreApplication::translate("Dialog", "Point 1", nullptr));
        linepointbtn2->setText(QCoreApplication::translate("Dialog", "Point 2", nullptr));
        lineplay->setText(QCoreApplication::translate("Dialog", "PLAY", nullptr));
        btn3d->setText(QCoreApplication::translate("Dialog", "3D Model", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
