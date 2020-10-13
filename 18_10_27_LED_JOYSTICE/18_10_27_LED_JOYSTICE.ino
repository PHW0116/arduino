void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("x는");
  Serial.println(analogRead(A0));
  delay(1000);
  Serial.print("y는");
  Serial.println(analogRead(A1));
  delay(1000);

  
}
