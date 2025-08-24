void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(11, LOW);
  digitalWrite(13, HIGH);
  if(digitalRead(13) == HIGH) {     // 만약 13번핀에 HIGH신호가 입력되면
    tone(5, 100.0);                 // 5번핀에 주파소 신호 130.8을 출력
  }
  delay(100);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  if(digitalRead(12) == HIGH) {     // 만약 13번핀에 HIGH신호가 입력되면
    tone(5, 250.5);                 // 5번핀에 주파소 신호 130.8을 출력
  }
  delay(50);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  if(digitalRead(11) == HIGH) {     // 만약 13번핀에 HIGH신호가 입력되면
    tone(5, 401.0);                 // 5번핀에 주파소 신호 130.8을 출력
  }
  delay(50);
}
