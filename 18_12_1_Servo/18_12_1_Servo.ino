#include<Servo.h>


Servo yee;
void setup() {
  // put your setup code here, to run once:
yee.attach(10);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
yee.write(0); //각도
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
delay(1000);
yee.write(179); //각도
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
delay(1000);
}
