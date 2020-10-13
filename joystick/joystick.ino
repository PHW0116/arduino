void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT); //x
  pinMode(A1,INPUT); //y
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("x축");
  Serial.println(analogRead(A0));
  delay(1000);
  Serial.print("y축");
  Serial.println(analogRead(A1));
  delay(1000);
}
