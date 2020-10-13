#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 12
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  Serial.println("DHT11 TEST");

  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);

  float t = dht.readTemperature();
  float h = dht.readHumidity();

  Serial.print("온도");
  Serial.print(t);
  Serial.println("*c");
  Serial.print("습도");
  Serial.print(h);
  Serial.println('%');

  if(h >= 70)
  {
    digitalWrite(9, HIGH);
    digitalWrite(11, LOW);
  }

  else
  {
    digitalWrite(9, LOW);
    digitalWrite(11, HIGH);
  }
}
