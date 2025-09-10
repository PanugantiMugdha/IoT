#include <DTH.h>
#include <Wire.h>
#define DTH11PIN 12
DTH dth(DHT11PIN, DHT11);
void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  float humi=dht.readHumidity();
  float temp=dht.readTemperature();
  Serial.print("Temperature:");
  Serial.print(temp);
  Serial.println("C");
  Serial.print("Humidity:");
  Serial.print(humi);
  Serial.println("%");
  delay(1000);
}
