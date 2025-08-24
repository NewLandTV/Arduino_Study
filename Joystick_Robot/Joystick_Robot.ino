#include <HuemonelabKit.h>

JoyStick joystick(A0, A1);
Stepper stepper(8, 9, 10, 11);

void setup() {
  Serial.begin(9600);
  joystick.attach(5);
  stepper.setSpeed(5);
}

void loop() {
  int valueX = joystick.read('X');
  int valueY = joystick.read('Y');
  Serial.println(valueX);

  if(valueX > 900) {
    stepper.move(-10);
  } else if(valueX < 50) {
    stepper.move(10);
  }
}
