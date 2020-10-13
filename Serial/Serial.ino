void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(11,OUTPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  if(analogRead(A0) > 200 )
  {
   digitalWrite(11,HIGH);
   }
   else
   {
    digitalWrite(11,LOW);
    }
   delay(10);
     }
  
