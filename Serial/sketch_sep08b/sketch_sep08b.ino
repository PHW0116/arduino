void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  delay(10);
  if(analogRead(A0) > 500)
  {
    //on
    digitalWrite (13,HIGH);
    delay(100);
    }
    else
    {
      //off
      digitalWrite (13,LOW);
      delay(100);
      }
}
