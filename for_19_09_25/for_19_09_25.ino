void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(8) == HIGH)
  {
    for(int i = 0;i < 3;i++)
    {
      digitalWrite(10, HIGH);
      delay(500);
      digitalWrite(10, LOW);
      delay(500);
    }
  }
  else if(digitalRead(7) == HIGH)
  {
    for(int i = 0;i < 3;i++)
    {
      digitalWrite(11, HIGH);
      delay(500);
      digitalWrite(11, LOW);
      delay(500);
    }
  }
}
