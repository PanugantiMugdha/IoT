#define TRIG_PIN 26
#define ECHO_PIN 25
#define BUZZER_PIN 23
#define DISTANCE_TRESHOLD 10
void setup()
{
  Serial.begin(115200);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);
}
void loop()
{
  float distance=getDistance();
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.println("cm");
  if(distance > 0 && distance < DISTANCE_TRESHOLD)
  {
    Serial.println("Intrusion Detected");
    digitalWrite(BUZZER_PIN, HIGH);
  }
  else
  {
    digitalWrite(BUZZER_PIN, LOW);
  }
delay(500);
}
float getDistance()
{
  digitalWrite(TRIG_PIN,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN,LOW);
  long duration=pulseIn(ECHO_PIN, HIGH, 30000);
  if(duration==0)
  {
    return -1;
  }
  float distance = duration * 0.034/2;
  return distance;
}
