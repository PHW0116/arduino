void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT)
  }

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(analogRead(A0));
  }