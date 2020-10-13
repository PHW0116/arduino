void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("x 좌표는");
  Serial.println(analogRead(A0));
  //delay(1000);
  Serial.print("y 좌표는");
  Serial.println(analogRead(A1));
  //delay(1000);
  if(analogRead(A0) < 10)
{
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(13,LOW);
  }
  if(analogRead(A0) > 1000)
{
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  }
  if(analogRead(A1) < 10)
{
  digitalWrite(13,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
}
  if(analogRead(A1) > 1000)
{
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  }
  if((500 < analogRead(A1))&&(analogRead(A1) < 900))
{
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  }
    
}
