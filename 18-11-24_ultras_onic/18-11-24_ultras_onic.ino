void setup() {
  pinMode(2,OUTPUT);//trig
  pinMode(3,INPUT);//echo
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  digitalWrite(2,LOW);
  delayMicroseconds(2);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);
  


  int distance = pulseIn(3,HIGH)*340/2/10000;
  Serial.print(distance);
  Serial.println("cm");
  delay(00);


   if (distance < 10)
  {
   
   digitalWrite(4,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
    }

    else if(distance < 20)
  {
   
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
    }
    else
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
}
