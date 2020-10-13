#include <Servo.h>
Servo sv;

void setup() {
  // put your setup code here, to run once:
  sv.attach(3);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    String a = Serial.readString();
    int num = a.toInt();
    sv.write(num);
    Serial.println(num);
  }
}
