#include <Servo.h>

Servo servo;

int servoPin = 6;
int angle = 180;

void setup() {
  Serial.begin(9600);
  servo.attach(servoPin);
  servo.write(angle);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  long value = 0;

  for(value = 0; value <= 180; value++) {
    angle = value;
    servo.write(angle); 
    value += 179;
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    tone(5, 143.5);
    delay(1000);
    angle = value;
    servo.write(angle); 
    value -= 179;
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    tone(5, 1435.0);
    delay(1000);
  }
}
