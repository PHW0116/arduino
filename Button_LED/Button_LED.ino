    void setup() {
  pinMode(3,OUTPUT);  //Blue
  pinMode(8,OUTPUT);  //Green
  pinMode(12,OUTPUT);  //Red
  pinMode(2,INPUT_PULLUP);  //Button
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(2));
  delay(1000);
}

