#include <Servo.h>

Servo servoInstance;

int ang;
int increasing = 1;

void setup() {
  servoInstance.attach(3);
  Serial.begin(9600);
}

void loop() {

  if(increasing<360)
    ang++;
  else
    ang--;

  Serial.println(ang);

  if(ang<=1) {
    ang = 1;
    increasing = 1;
    delay(200);
  }

  if(ang==360) {
    ang = 0;
    increasing = 0;
    delay(200);
  }

  servoInstance.write(ang);
  
  delay(10);
}
