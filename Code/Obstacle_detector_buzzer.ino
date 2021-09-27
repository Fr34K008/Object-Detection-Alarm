int SENSOR = 4;
int LED = 6;
int buzzer = 2;

void setup(void)
{
  pinMode(LED,OUTPUT);
  pinMode(SENSOR,INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop(void)
{
  if (digitalRead(SENSOR) == LOW)
  {
    digitalWrite(LED,HIGH);
    delay(300);
    tone(buzzer,500);
    delay(200);
    noTone(buzzer);
  }
  else if (digitalRead(SENSOR) == HIGH)
  {
    digitalWrite(LED,LOW);
  }
}
