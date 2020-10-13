void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);  //r
  pinMode(10, OUTPUT);  //g
  pinMode(11, OUTPUT);  //b
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(7));
  if(analogRead(A0) < 300)
  {
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    if(digitalRead(8) == HIGH)
    {
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(11, LOW);
     if(digitalRead(7) == HIGH)
     {
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(11, HIGH);
    }
    }
}
  else if(analogRead(A0) >= 300 && analogRead(A0) < 600)
  {
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    if(digitalRead(8) == HIGH)
    {
     digitalWrite(9, LOW);
     digitalWrite(10, HIGH);
     digitalWrite(11, HIGH);
     if(digitalRead(7) == HIGH)
     {
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(11, HIGH);
    }
    }
  }
  else
  {
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11,HIGH);
  if(digitalRead(8) == HIGH)
    {
     digitalWrite(9, HIGH);
     digitalWrite(10, LOW);
     digitalWrite(11, HIGH);
     if(digitalRead(7) == HIGH)
     {
     digitalWrite(9, HIGH);
     digitalWrite(10, HIGH);
     digitalWrite(11, HIGH);
    }
  }
  }
}
