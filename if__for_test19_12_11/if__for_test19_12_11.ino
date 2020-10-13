void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  if(analogRead(A0) <= 300)
  { 
    if(digitalRead(8) == HIGH)
    {
      for(int i = 0;i < 5;i++)
      {
        digitalWrite(9, HIGH);
        delay(500);
        digitalWrite(9, LOW);
        delay(500);
      }
    }
  }
  if(300 < analogRead(A0) &&analogRead(A0) <= 600)
  { 
    if(digitalRead(8) == HIGH)
    {
      for(int i = 0;i < 5;i++)
      {
        digitalWrite(10, HIGH);
        delay(500);
        digitalWrite(10, LOW);
        delay(500);
      }
    }
  }
  if(600 < analogRead(A0))
  { 
    if(digitalRead(8) == HIGH)
    {
      for(int i = 0;i < 5;i++)
      {
        digitalWrite(11, HIGH);
        delay(500);
        digitalWrite(11, LOW);
        delay(500);
      }
    }
  }
}
