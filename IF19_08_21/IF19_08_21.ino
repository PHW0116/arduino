void setup() {
pinMode(9,OUTPUT);  //r
pinMode(10,OUTPUT);  //g
pinMode(11,OUTPUT);  //b
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
 Serial.println(analogRead(A0));
 if(analogRead(A0) >= 500)
{
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  }
else
{
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  }
}
