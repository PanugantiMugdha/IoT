#include <SoftwareSerial.h>
SoftwareSerial bt(3,1);
void setup()
{
  bt.begin(9600);
  Aerial.begin(9600);
}
void loop()
{
  if(bt.available())
  {
    Serial.write(bt.read());
  }
  if(Serial.available())
  {
    bt.write(Serial.read());
  }
}

