#include <Servo.h>
Servo sv;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  sv.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(7) == HIGH)
  {
    for(int i=0;i<180;i++)
    {
      sv.write(i);
      delay(10);
    }
  }
  else if(digitalRead(8) == HIGH)
  {
    for(int  i=180;i>0;i--)
    {
      sv.write(i);
      delay(10);
    }
  }
}
