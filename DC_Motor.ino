#define PB 21
#define RELAY 12
void setup()
{
  Serial.begin(9600);
  pinMode(PB, INPUT);
  pinMode(RELAY, OUTPUT);
}
void loop()
{
  int pb=digitalRead(PB);
  Serial.println(pb);
  if(pb==0)
  {
    digitalWrite(RELAY, HIGH);
  }
  else
  {
    digitalWrite(RELAY, LOW);
  }
}
