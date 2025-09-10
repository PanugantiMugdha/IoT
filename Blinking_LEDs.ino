int leds[]={27,26,25,33};
int numLeds=4;
int delayTime=200;
int direction=1;
int currentLed=0;
void setup()
{
  for(int i=0;i<numLeds;i++)
  {  
    pinMode(leds[i],OUTPUT);
  }
}
void loop()
{
  for(int i=0;i<numLeds;i++)
  {
     digitalWrite(leds[i],LOW);
  }
  digitalWrite(leds[currentLed],HIGH);
  delay(delayTime);
  currentLed += direction;
  if(currentLed >= numLeds-1 || currentLed <= 0)
  {
    direction *= -1;
  }
}

