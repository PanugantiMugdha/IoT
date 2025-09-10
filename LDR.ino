#define LDR 32
#define BUZZER_PIN 23
#define LIGHT_TRESHOLD 500
void setup()
{
  Serial.begin(9600);
  pinMode(LDR, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);
}
void loop()
{
  int sensorValue=analogRead(LDR);
  Serial.print("LDR Level:");
  Serial.println(sensorValue);
  if(sensorValue < LIGHT_TRESHOLD)
  {
    Serial.println("Low light detected - BUZZER On");
    digitalWrite(BUZZER_PIN, HIGH);
  }
  else
  {
    digitalWrite(BUZZER_PIN, LOW);
  }
  delay(500);
}

