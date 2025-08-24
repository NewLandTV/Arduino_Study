#define DELAY_TIME 25

void setup() {  // 핀모드를 설정하는 곳
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() { // D2, D4, D6, D8 D10까지 순차적으로 LED 불이 켜짐
  digitalWrite(2, HIGH);
  delay(DELAY_TIME);
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  delay(DELAY_TIME);
  digitalWrite(4, LOW);
  digitalWrite(6, HIGH);
  delay(DELAY_TIME);
  digitalWrite(6, LOW);
  digitalWrite(8, HIGH);
  delay(DELAY_TIME);
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  delay(DELAY_TIME);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(DELAY_TIME);
  digitalWrite(8, LOW);
  digitalWrite(6, HIGH);
  delay(DELAY_TIME);
  digitalWrite(6, LOW);
  digitalWrite(4, HIGH);
  delay(DELAY_TIME);
  digitalWrite(4, LOW);
}
