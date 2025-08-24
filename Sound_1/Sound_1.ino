void setup() {
  pinMode(5, OUTPUT);                   // 5번핀을 출력모드로 설정
}
void loop() {
  tone(5, 261.6);                       // 도
  delay(200); noTone(5); delay(200);
  tone(5, 311.1);                       // 레
  delay(200); noTone(5); delay(200);
  tone(5, 329.6);                       // 미
  delay(200); noTone(5); delay(200);
  tone(5, 349.2);                       // 파
  delay(200); noTone(5); delay(200);
}
