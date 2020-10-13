int a = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode (8, OUTPUT); //Red
  pinMode (9, OUTPUT); //Green
  pinMode (10, OUTPUT); //Blue
  Serial.begin(300);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
   a = Serial.read();
  }
  if(a == '1')
  {
  digitalWrite(8,LOW); //red
  }
  else if(a == '2')
  {
  digitalWrite(10,LOW); //blue
  }
  else if(a == '3')
  {
  digitalWrite(9,LOW); //green
  }
  else if(a == '4')
  {
  digitalWrite(8,HIGH); //red
  digitalWrite(9,HIGH); //green
  digitalWrite(10,HIGH); //blue
  }
}
