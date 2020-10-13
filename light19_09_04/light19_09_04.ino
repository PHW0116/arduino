void setup() {
  // put your setup code here, to run once:
  pinMode(A1, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A1));
  if(analogRead(A1) <= 500)
  {
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
  }
  else if(analogRead(A1) >= 500)
  {
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
  }
    else
  {digitalWrite(9, LOW);
   digitalWrite(10, LOW);
   }
}
