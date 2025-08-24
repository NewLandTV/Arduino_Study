const int AXIS_X = A0;
const int AXIS_Y = A1;
const int SW_POWER = 2;

void setup() {
  Serial.begin(9600);

  pinMode(SW_POWER, INPUT);
}

void loop() {
  int x = map(analogRead(AXIS_X), 0, 1023, -100, 100);
  int y = map(analogRead(AXIS_Y), 0, 1024, -100, 100);

  Serial.print("X : ");
  Serial.print(x);
  Serial.print(", Y : ");
  Serial.print(y);
  Serial.print(", Z : ");
  Serial.println(!digitalRead(SW_POWER));

  delay(25);
}
