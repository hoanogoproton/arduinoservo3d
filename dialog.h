#ifndef DIALOG_H
#define DIALOG_H

#include <QDebug>
#include <QDialog>
#include <QQueue>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTextEdit>
#include <QTimer>
#include <QtCore>
#include <QtGui>
#include <QtMath>
#include <QtWidgets>
#include <cmath>
#include <QMainWindow>
#include <QApplication>
#include <QtGraphs/Q3DScatter>
#include <QtGraphs/QScatter3DSeries>
#include <QtDataVisualization/Q3DScatter>
#include <QtDataVisualization/QScatter3DSeries>
#include <QtDataVisualization/QScatterDataProxy>
#include <QtDataVisualization/Q3DCamera>
#include <QtGui/QVector3D>
#include <Q3DTheme>
#include <Q3DScene>
#include <QValue3DAxis>


QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_degree0_clicked();

    void on_degree45_clicked();

    void on_degree90_clicked();

    void updateServo(QString command);
    void on_horizontalSlider_valueChanged(int value);

    void on_recordButton_clicked();

    void on_pushButton_2_clicked();
    void playNextCommand();

    void on_slider2_valueChanged(int value);
    void drawLine1(double angle, double angle2);
    void drawLine2(double angle3);

    void clearGraphicsView();
    void clearGraphicsView2();

    void on_speedChange_valueChanged(int value);

    void on_slider3_valueChanged(int value);

    void on_slider4_valueChanged(int value);

    void anglesToPos(double b, double a1, double a2, double &x, double &y, double &z);
    void posToAngles(double x, double y, double z, double &b, double &a1, double &a2);

    void on_caculatebtn_clicked();

    void on_changebtn_clicked();
    void normalizeAngle(double &angle);

    void updateSlidersAndLabels(double b, double a1, double a2);
    void on_linepointbtn1_clicked();

    void on_linepointbtn2_clicked();

    void on_lineplay_clicked();

    void on_btn3d_clicked();

private:
    QString servoSetting;
    QSerialPort *arduino;

    static const quint16 arduino_uno_vendorID = 6790;
    static const quint16 arduino_uno_productID = 29987;
    QString arduino_port_name;
    bool arduino_is_available;
    QQueue<QString> commandQueue;
    QTimer *playTimer;

    void updateCommandTextEdit(); // New method to update the QTextEdit
    QGraphicsScene *scene;
    QGraphicsScene *scene2;
    QGraphicsLineItem *line;
    double angle, angle2, spd, angle3, angle4, x, y, z, a1, a2, b;

    QString lineanglesString1, lineanglesString2;
     void drawLine(Q3DScatter *scatter, const QVector3D &pointA, const QVector3D &pointB, int numPoints);
    Ui::Dialog *ui;
};
#endif // DIALOG_H
