int kPin = 8;
int xPin = A0;
int yPin = A1;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int swValue = digitalRead(kPin);
    int xValue = analogRead(xPin);
    int yValue = analogRead(yPin);
}