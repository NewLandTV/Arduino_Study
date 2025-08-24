#define buttonSkill1 6
#define buttonSkill2 7

void setup()
{
    Serial.begin(9600);

    pinMode(buttonSkill1, INPUT);
    pinMode(buttonSkill2, INPUT);

    digitalWrite(buttonSkill1, HIGH);
    digitalWrite(buttonSkill2, HIGH);
}

void loop()
{
    if (digitalRead(buttonSkill1) == LOW)
    {
        Serial.write(0);
        Serial.flush();
    }
    if (digitalRead(buttonSkill1) == LOW)
    {
        Serial.write(1);
        Serial.flush();
    }
    
    delay(5);
}
