void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT); // vrx
  pinMode(A1,INPUT); // vry
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly;
  Serial.print("XXX");
  Serial.println(analogRead(A0)); //x좌표
  delay(500);
  Serial.print("YYY");
  Serial.println(analogRead(A1)); //y좌표
  delay(500);
  if(analogRead(A0) < 10)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    delay(1000);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    delay(1000);
    //Blue LED On
   }
   if(analogRead(A1) < 10)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    delay(1000);
    //Green LED On
  }
    if(analogRead(A0) > 1000)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    delay(1000);
    //Green and Blue LED On
  }
 }
