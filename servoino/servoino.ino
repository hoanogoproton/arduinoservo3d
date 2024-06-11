#include <Servo.h>

Servo servo1, servo2, servo3, servo4;
int currentAngle1 = 90;
int currentAngle2 = 0;
int currentAngle3 = 90;
int currentAngle4 = 0;
int delayTime = 20; // Thời gian chờ mặc định giữa mỗi bước thay đổi góc

void setup() {
  Serial.begin(9600);
  servo1.attach(3);
  servo1.write(currentAngle1);
  servo2.attach(5);
  servo2.write(currentAngle2);
  servo3.attach(6);
  servo3.write(currentAngle3);
  servo4.attach(9);
  servo4.write(currentAngle4);
  delay(2000);
}

void loop() {
  while (Serial.available()) {
    String input = Serial.readString(); // Đọc toàn bộ chuỗi nhập vào
    if (input.length() > 0) {
      parseAndMoveServos(input);
    }
  }
}

void parseAndMoveServos(String input) {
  int angles[4] = {currentAngle1, currentAngle2, currentAngle3, currentAngle4};
  char commands[] = {'a', 'b', 'c', 'd', 's'};
  
  int startIndex = 0;
  for (int i = 0; i < 5; i++) {
    int index = input.indexOf(commands[i], startIndex);
    if (index != -1) {
      int valueStart = index + 1;
      int valueEnd = (i < 4) ? input.indexOf(commands[i + 1], valueStart) : input.length();
      if (valueEnd == -1) {
        valueEnd = input.length();
      }
      String valueStr = input.substring(valueStart, valueEnd);
      int value = valueStr.toInt();
      if (commands[i] == 'a') {
        angles[0] = 180-value;
      } else if (commands[i] == 'b') {
        angles[1] = value+60;
      } else if (commands[i] == 'c') {
        angles[2] = value;
      } else if (commands[i] == 'd') {
        angles[3] = value;
      } else if (commands[i] == 's') {
        delayTime = value;
        Serial.println("New delay time: " + String(delayTime)); // In ra giá trị delay mới để kiểm tra
      }
      startIndex = valueEnd;
    }
  }

  moveServosTogether(angles, delayTime);
}

void moveServosTogether(int angles[4], int delayTime) {
  int maxSteps = max(abs(currentAngle1 - angles[0]), max(abs(currentAngle2 - angles[1]), max(abs(currentAngle3 - angles[2]), abs(currentAngle4 - angles[3]))));
  
  float step1 = (float)(angles[0] - currentAngle1) / maxSteps;
  float step2 = (float)(angles[1] - currentAngle2) / maxSteps;
  float step3 = (float)(angles[2] - currentAngle3) / maxSteps;
  float step4 = (float)(angles[3] - currentAngle4) / maxSteps;

  for (int step = 0; step <= maxSteps; step++) {
    int newAngle1 = currentAngle1 + round(step1 * step);
    int newAngle2 = currentAngle2 + round(step2 * step);
    int newAngle3 = currentAngle3 + round(step3 * step);
    int newAngle4 = currentAngle4 + round(step4 * step);
    
    servo1.write(newAngle1);
    servo2.write(newAngle2);
    servo3.write(newAngle3);
    servo4.write(newAngle4);
    
    delay(delayTime);
  }

  currentAngle1 = angles[0];
  currentAngle2 = angles[1];
  currentAngle3 = angles[2];
  currentAngle4 = angles[3];
}
