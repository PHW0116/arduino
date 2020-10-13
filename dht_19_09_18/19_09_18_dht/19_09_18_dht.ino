#include <DHT.h>
#include <DHT_U.h>

DHT dht(12, DHT11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("DHT11 TEST!");

  dht.begin();
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);

  float t = dht.readTemperature();
  float h = dht.readHumidity();
  
  Serial.print("온도:");
  Serial.print(t);
  Serial.println("*C");
  Serial.print("습도:");
  Serial.print(h);
  Serial.println('%');
  if(analogRead(A0) <= 300)
  {
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
    if(h >= 80)
    {
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    }
  }
      else if(analogRead(A0) >= 300 && analogRead(A0) <= 600)
      {
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
        if(h >= 80)
        {
        digitalWrite(9, LOW);
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);
        }
      }
        else
        {
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
        if(h >= 80)
         {
        digitalWrite(9, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
        }
    }
}
