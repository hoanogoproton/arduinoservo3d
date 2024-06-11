#include "dialog.h"
#include <QMessageBox>
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    arduino = new QSerialPort;
    arduino_is_available = false;
    arduino_port_name = "";

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    scene2 = new QGraphicsScene(this);
    ui->graphicsView_2->setScene(scene2);

    qDebug() << "Number of ports: " << QSerialPortInfo::availablePorts().length();
    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        if (serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()) {
            qDebug() << "Vendor ID: " << serialPortInfo.vendorIdentifier();
            qDebug() << "Product ID: " << serialPortInfo.productIdentifier();
        }
    }

    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        if (serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()) {
            if (serialPortInfo.vendorIdentifier() == arduino_uno_vendorID) {
                if (serialPortInfo.productIdentifier() == arduino_uno_productID) {
                    arduino_port_name = serialPortInfo.portName();
                    arduino_is_available = true;
                }
            }
        }
    }

    if (arduino_is_available) {
        arduino->setPortName(arduino_port_name);
        arduino->open(QSerialPort::WriteOnly);
        arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        arduino->setFlowControl(QSerialPort::NoFlowControl);
    } else {
        QMessageBox::warning(this, "Port Error", "Couldn't find Arduino!");
    }
    playTimer = new QTimer(this);
    connect(playTimer, &QTimer::timeout, this, &Dialog::playNextCommand);

    ui->slider3->setValue(90);

    // Initialize other UI elements if needed
    QString ss = QString::number(90);
    angle3 = 90;
    ui->label_4->setText(ss);
    ss.prepend('c');
    updateServo(ss);

    ui->horizontalSlider->setValue(90);
    QString ss1 = QString::number(90);
    angle = 90;
    ui->label_2->setText(ss1);
    ss.prepend('a');
    updateServo(ss1);

    ui->slider2->setValue(-60);
    // Initialize other UI elements if needed
    QString ss2 = QString::number(-60);
    angle2 = -60;
    ui->label_3->setText(ss2);
    ss.prepend('b');
    updateServo(ss2);

     drawLine1(angle, angle2);
}

Dialog::~Dialog()
{
    if (arduino->isOpen()) {
        qDebug() << "Closing port...";
        arduino->close();
    }
    delete ui;
}

void Dialog::on_degree0_clicked()
{
    ui->horizontalSlider->setValue(90);
    QString servoSetting = "90";
    ui->label_2->setText(servoSetting);

    QTimer::singleShot(3000, this, [this]() {
        ui->slider2->setValue(-60);
        QString servoSetting2 = "-60";
        ui->label_3->setText(servoSetting2);

        QTimer::singleShot(3000, this, [this]() {
            ui->slider3->setValue(90);
            QString servoSetting3 = "90";
            ui->label_4->setText(servoSetting3);

            QTimer::singleShot(3000, this, [this]() {
                ui->slider4->setValue(0);
                QString servoSetting4 = "0";
                ui->label_5->setText(servoSetting4);
            });
        });
    });
}

void Dialog::on_degree45_clicked()
{
    ui->horizontalSlider->setValue(45);
    QString servoSetting = "45";
    ui->label_2->setText(servoSetting);
}

void Dialog::on_degree90_clicked()
{
    ui->horizontalSlider->setValue(90);
    QString servoSetting = "90";
    ui->label_2->setText(servoSetting);
}

void Dialog::on_horizontalSlider_valueChanged(int value)
{
    QString ss = QString::number(value);
    angle = value;
    ui->label_2->setText(ss);
    ss.prepend('a');
    updateServo(ss);
    clearGraphicsView();
    drawLine1(angle, angle2);
}

void Dialog::updateServo(QString command)
{
    if (arduino->isWritable()) {
        qDebug() << command.toStdString().c_str();
        arduino->write(command.toStdString().c_str());
    } else {
        qDebug() << "Could not write!";
    }
}

void Dialog::on_recordButton_clicked()
{
    QString command1 = "a" + ui->label_2->text();
    QString command2 = "b" + ui->label_3->text();
    QString command3 = "c" + ui->label_4->text();
    QString command4 = "d" + ui->label_5->text(); // Giả sử label_5 là label cho command4

    // Kiểm tra xem command1 trùng với bất kỳ phần tử nào trong hàng đợi không
    bool command1Exists = false;
    for (int i = 0; i < commandQueue.size(); ++i) {
        if (command1 == commandQueue[i]) {
            command1Exists = true;
            break;
        }
    }

    // Kiểm tra xem command2 trùng với bất kỳ phần tử nào trong hàng đợi không
    bool command2Exists = false;
    for (int i = 0; i < commandQueue.size(); ++i) {
        if (command2 == commandQueue[i]) {
            command2Exists = true;
            break;
        }
    }

    // Kiểm tra xem command3 trùng với bất kỳ phần tử nào trong hàng đợi không
    bool command3Exists = false;
    for (int i = 0; i < commandQueue.size(); ++i) {
        if (command3 == commandQueue[i]) {
            command3Exists = true;
            break;
        }
    }

    // Kiểm tra xem command4 trùng với bất kỳ phần tử nào trong hàng đợi không
    bool command4Exists = false;
    for (int i = 0; i < commandQueue.size(); ++i) {
        if (command4 == commandQueue[i]) {
            command4Exists = true;
            break;
        }
    }

    if (command1Exists) {
        qDebug() << "Command 1 is identical to a previous command, not adding to queue.";
    } else {
        commandQueue.enqueue(command1);
        qDebug() << "Command 1 recorded:" << command1;
    }

    if (command2Exists) {
        qDebug() << "Command 2 is identical to a previous command, not adding to queue.";
    } else {
        // Kiểm tra xem command2 trùng với command1 hay không
        if (command1 != command2) {
            commandQueue.enqueue(command2);
            qDebug() << "Command 2 recorded:" << command2;
        } else {
            qDebug() << "Command 2 is identical to command 1, not adding to queue.";
        }
    }

    if (command3Exists) {
        qDebug() << "Command 3 is identical to a previous command, not adding to queue.";
    } else {
        // Kiểm tra xem command3 trùng với command1 hay command2 hay không
        if (command3 != command1 && command3 != command2) {
            commandQueue.enqueue(command3);
            qDebug() << "Command 3 recorded:" << command3;
        } else {
            qDebug() << "Command 3 is identical to command 1 or command 2, not adding to queue.";
        }
    }

    if (command4Exists) {
        qDebug() << "Command 4 is identical to a previous command, not adding to queue.";
    } else {
        // Kiểm tra xem command4 trùng với command1, command2 hay command3 hay không
        if (command4 != command1 && command4 != command2 && command4 != command3) {
            commandQueue.enqueue(command4);
            qDebug() << "Command 4 recorded:" << command4;
        } else {
            qDebug() << "Command 4 is identical to command 1, command 2 or command 3, not adding "
                        "to queue.";
        }
    }

    updateCommandTextEdit();
}

void Dialog::on_pushButton_2_clicked()
{
    if (!commandQueue.isEmpty()) {
        playTimer->start(3000); // 1 second interval
    } else {
        qDebug() << "Command queue is empty!";
    }
}

void Dialog::playNextCommand()
{
    if (!commandQueue.isEmpty()) {
        QString command = commandQueue.dequeue();
        updateServo(command);
        // Phân tích lệnh để lấy góc độ và cập nhật giao diện
        if (command.startsWith('a')) {
            int angle = command.mid(1).toInt();
            ui->horizontalSlider->setValue(angle);        // Cập nhật slider
            ui->label_2->setText(QString::number(angle)); // Cập nhật nhãn
            this->angle = angle;                          // Cập nhật biến góc độ
        } else if (command.startsWith('b')) {
            int angle2 = command.mid(1).toInt();
            ui->slider2->setValue(angle2);                 // Cập nhật slider
            ui->label_3->setText(QString::number(angle2)); // Cập nhật nhãn
            this->angle2 = angle2;                         // Cập nhật biến góc độ
        } else if (command.startsWith('c')) {
            int angle3 = command.mid(1).toInt();
            ui->slider3->setValue(angle3);                 // Cập nhật slider
            ui->label_4->setText(QString::number(angle3)); // Cập nhật nhãn
            this->angle3 = angle3;                         // Cập nhật biến góc độ
        }

        else if (command.startsWith('d')) {
            int angle4 = command.mid(1).toInt();
            ui->slider4->setValue(angle4);                 // Cập nhật slider
            ui->label_5->setText(QString::number(angle4)); // Cập nhật nhãn
            this->angle4 = angle4;                         // Cập nhật biến góc độ
        }

        // Vẽ lại đồ họa
        clearGraphicsView();
        drawLine1(this->angle, this->angle2);

        updateCommandTextEdit();
    } else {
        playTimer->stop();
        qDebug() << "Finished playing all commands!";
    }
}

void Dialog::updateCommandTextEdit()
{
    ui->commandTextEdit->clear();
    foreach (const QString &command, commandQueue) {
        ui->commandTextEdit->append(command);
    }
}

void Dialog::on_slider2_valueChanged(int value)
{
    QString ss = QString::number(value);
    angle2 = value;
    ui->label_3->setText(ss);
    ss.prepend('b');
    updateServo(ss);
    clearGraphicsView();
    drawLine1(angle, angle2);
}

void Dialog::drawLine1(double angle, double angle2)
{
    double angleRad = angle * 3.14 / 180;
    double angleRad2 = angle2 * 3.14 / 180;
    QPen blackpen(Qt::black);
    blackpen.setWidth(10);
    scene->addLine(0, 0, 100 * cos(angleRad), -100 * sin(angleRad), blackpen);

    QPen redPen(Qt::red);
    redPen.setWidth(10);
    scene->addLine(100 * cos(angleRad),
                   -100 * sin(angleRad),
                   100 * (cos(angleRad) + cos(angleRad2)),
                   -100 * (sin(angleRad) + sin(angleRad2)),
                   redPen);

    QPen circlePen(Qt::black);
    QBrush circleBrush(Qt::green);
    scene->addEllipse(-15, -15, 30, 30, circlePen, circleBrush);
}

void Dialog::drawLine2(double angle3)
{
    double angleRad = angle3 * 3.14 / 180;
    QPen bluePen(Qt::blue);
    bluePen.setWidth(10);
    QLineF line(0, 0, 100 * cos(angleRad), -100 * sin(angleRad));
    scene2->addLine(line, bluePen);

    double arrowSize = 15;
    double arrowAngle = 30 * M_PI / 180.0;

    QPointF arrowP1 = line.p2()
                      + QPointF(-arrowSize * cos(angleRad - arrowAngle),
                                arrowSize * sin(angleRad - arrowAngle));
    QPointF arrowP2 = line.p2()
                      + QPointF(-arrowSize * cos(angleRad + arrowAngle),
                                arrowSize * sin(angleRad + arrowAngle));

    scene2->addLine(QLineF(line.p2(), arrowP1), bluePen);
    scene2->addLine(QLineF(line.p2(), arrowP2), bluePen);

    QPen circlePen(Qt::black);
    QBrush circleBrush(Qt::green);
    scene2->addEllipse(-15, -15, 30, 30, circlePen, circleBrush);
}

void Dialog::clearGraphicsView()
{
    // Giả sử ui->graphicsView là đối tượng QGraphicsView của bạn
    QGraphicsScene *scene = ui->graphicsView->scene();
    if (scene) {
        scene->clear(); // Xóa tất cả các QGraphicsItem từ QGraphicsScene
    }
}

void Dialog::clearGraphicsView2()
{
    // Giả sử ui->graphicsView là đối tượng QGraphicsView của bạn
    QGraphicsScene *scene2 = ui->graphicsView_2->scene();
    if (scene2) {
        scene2->clear(); // Xóa tất cả các QGraphicsItem từ QGraphicsScene
    }
}

void Dialog::on_speedChange_valueChanged(int value)
{
    QString ss = QString::number(21 - value);
    QString spd = QString::number(value);
    ui->speedLabel->setText(spd);
    ss.prepend('s');
    updateServo(ss);
}

void Dialog::on_slider3_valueChanged(int value)
{
    QString ss = QString::number(value);
    angle3 = value;
    ui->label_4->setText(ss);
    ss.prepend('c');
    updateServo(ss);
    clearGraphicsView2();
    drawLine2(angle3);
}

void Dialog::on_slider4_valueChanged(int value)
{
    QString ss = QString::number(value);
    angle4 = value;
    ui->label_5->setText(ss);
    ss.prepend('d');
    updateServo(ss);
    //clearGraphicsView2();
    //drawLine2(angle3);
}

void Dialog::anglesToPos(double b, double a1, double a2, double &x, double &y, double &z)
{
    // Convert angles from degrees to radians
    b = b * M_PI / 180.0;
    a1 = a1 * M_PI / 180.0;
    a2 = a2 * M_PI / 180.0;

    // Length of each segment of the arm
    double L = 85.0;

    // Calculate phi and theta
    double phi = (a1 + a2) / 2.0;
    double theta = (a1 - a2) / 2.0;

    // Calculate lengths of h and l
    double h = 2 * L * cos(theta);
    double l = h * cos(phi);

    // Calculate z coordinate
    z = h * sin(phi);

    // Calculate x and y coordinates
    x = l * cos(b);
    y = l * sin(b);
}

void Dialog::on_caculatebtn_clicked()
{
    anglesToPos(angle3, angle, angle2, x, y, z);
    ui->xlabelnum->setText(QString::number(x, 'f', 2));
    ui->ylabelnum->setText(QString::number(y, 'f', 2));
    ui->zlabelnum->setText(QString::number(z, 'f', 2));
}

void Dialog::on_changebtn_clicked()
{
    // Get the coordinates from the text edits
    double x = ui->xedit->toPlainText().toDouble();
    double y = ui->yedit->toPlainText().toDouble();
    double z = ui->zedit->toPlainText().toDouble();

    // Variables to store the calculated angles
    double b, a1, a2;

    // Calculate the angles from the coordinates
    posToAngles(x, y, z, b, a1, a2);

    // Update the sliders and labels with the calculated angles
    updateSlidersAndLabels(b, a1, a2);

    // Convert the angles to integers
    int bInt = static_cast<int>(b);
    int a1Int = static_cast<int>(a1);
    int a2Int = static_cast<int>(a2);

    // Create the command string in the format "a+number+b+number+c+number"
    QString command = QString("a%1b%2c%3").arg(bInt).arg(a1Int).arg(a2Int);

    // Send the command to Arduino
    updateServo(command);
}

void Dialog::posToAngles(double x, double y, double z, double &b, double &a1, double &a2) {
    //double L = 75.0;

    b = atan2(y, x) * (180.0 / M_PI); // Convert radians to degrees
    //normalizeAngle(b); // Normalize b to [0, 180]

    double l = sqrt(x * x + y * y);
    double h = sqrt(l * l + z * z);

    double phi = atan2(z,l) * (180.0 / M_PI); // Use atan2 for correct quadrant
    double theta = acos(h / (2 * 85)) * (180.0 / M_PI); // acos(h / (2 * L)) is always positive

    a1 = phi + theta;
    a2 = phi - theta;

    //normalizeAngle(a1); // Normalize a1 to [0, 180]
    //normalizeAngle(a2); // Normalize a2 to [0, 180]
}

void Dialog::normalizeAngle(double &angle) {
    angle = fmod(angle, 360.0); // Wrap angle to [0, 360)
    if (angle < 0) {
        angle += 360.0; // Ensure angle is positive
    }
    if (angle > 180.0) {
        angle = 360.0 - angle; // Reflect angle to [0, 180]
    }
}

void Dialog::updateSlidersAndLabels(double b, double a1, double a2)
{
    // Update the value of the slider and label for angle b
    ui->horizontalSlider->setValue(a1);
    ui->label_2->setText(QString::number(a1, 'f', 2));

    // Update the value of the slider and label for angle a1
    ui->slider2->setValue(a2);
    ui->label_3->setText(QString::number(a2, 'f', 2));

    // Update the value of the slider and label for angle a2
    ui->slider3->setValue(b);
    ui->label_4->setText(QString::number(b, 'f', 2));
}

void Dialog::on_linepointbtn1_clicked()
{
    lineanglesString1
        = QString("a%1b%2c%3")
              .arg(angle, 0, 'f', 2) // Chuyển angle thành chuỗi với 2 chữ số thập phân
              .arg(angle2, 0, 'f', 2) // Chuyển angle2 thành chuỗi với 2 chữ số thập phân
              .arg(angle3, 0, 'f', 2); // Chuyển angle3 thành chuỗi với 2 chữ số thập phân
    anglesToPos(angle3, angle, angle2, x, y, z);
    // Hiển thị chuỗi kết quả lên màn hình hoặc thực hiện các thao tác khác
    QMessageBox::information(this,
                             "Point 1:",
                             QString("X=%1, Y=%2, Z=%3")
                                 .arg(x, 0, 'f', 2)
                                 .arg(y, 0, 'f', 2)
                                 .arg(z, 0, 'f', 2));

    qDebug() << lineanglesString1;
}

void Dialog::on_linepointbtn2_clicked()
{
    lineanglesString2
        = QString("a%1b%2c%3")
              .arg(angle, 0, 'f', 2) // Chuyển angle thành chuỗi với 2 chữ số thập phân
              .arg(angle2, 0, 'f', 2) // Chuyển angle2 thành chuỗi với 2 chữ số thập phân
              .arg(angle3, 0, 'f', 2); // Chuyển angle3 thành chuỗi với 2 chữ số thập phân
    anglesToPos(angle3, angle, angle2, x, y, z);
    // Hiển thị chuỗi kết quả lên màn hình hoặc thực hiện các thao tác khác
    QMessageBox::information(this,
                             "Point 2:",
                             QString("X=%1, Y=%2, Z=%3")
                                 .arg(x, 0, 'f', 2)
                                 .arg(y, 0, 'f', 2)
                                 .arg(z, 0, 'f', 2));
    // Hiển thị chuỗi kết quả lên màn hình hoặc thực hiện các thao tác khác
    qDebug() << lineanglesString2;
}

void Dialog::on_lineplay_clicked()
{
    // Gọi updateServo với chuỗi đầu tiên
    updateServo(lineanglesString1);

    // Sử dụng QTimer để gọi updateServo với chuỗi thứ hai sau 2 giây
    QTimer::singleShot(5000, this, [this]() { updateServo(lineanglesString2); });
}



void Dialog::on_btn3d_clicked()
{
    qDebug()<<angle;
    qDebug()<<angle3;
    Q3DScatter *scatter = new Q3DScatter();
    scatter->setMinimumSize(QSize(720, 720));

    anglesToPos(angle3, angle, angle2, x, y, z);
    // Vẽ đoạn thẳng từ (0,0,0) đến (1,1,1) với 10 điểm để biểu diễn
    drawLine(scatter, QVector3D(0, 0, 0), QVector3D(85*cos(angle*3.14/180)*cos(angle3*3.14/180), 85*cos(angle*3.14/180)*sin(angle3*3.14/180), 85*sin(angle*3.14/180)), 100);
    drawLine(scatter, QVector3D(85*cos(angle*3.14/180)*cos(angle3*3.14/180), 85*cos(angle*3.14/180)*sin(angle3*3.14/180), 85*sin(angle*3.14/180)), QVector3D(x, y, z), 100);


    // Hiển thị scatter
    scatter->show();
}

void Dialog::drawLine(Q3DScatter *scatter, const QVector3D &pointA, const QVector3D &pointB, int numPoints) {
    // Tạo dữ liệu cho đoạn thẳng
    QScatterDataArray data;

    // Add points along the line
    for (int i = 0; i <= numPoints; ++i) {
        float t = float(i) / numPoints;
        QVector3D point = pointA * (1 - t) + pointB * t;
        data << QScatterDataItem(point);
    }

    // Tạo series mới để chứa dữ liệu
    QScatter3DSeries *lineSeries = new QScatter3DSeries();
    lineSeries->dataProxy()->addItems(data);

    scatter->axisX()->setTitle("X Axis");
    scatter->axisY()->setTitle("Y Axis");
    scatter->axisZ()->setTitle("Z Axis");

    scatter->axisX()->setTitleVisible(true);
    scatter->axisY()->setTitleVisible(true);
    scatter->axisZ()->setTitleVisible(true);

    // Thêm series vào scatter
    scatter->addSeries(lineSeries);

    scatter->setAspectRatio(1.0);
    scatter->setHorizontalAspectRatio(1.0);

}

