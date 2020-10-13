int a =0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(A0) < 30)
  {
  digitalWrite(2,HIGH);
  }
  else
  {
  digitalWrite(2,LOW);
  }
}
