void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  if(digitalRead(13) == HIGH) {     // 만약 13번핀에 HIGH신호가 입력되면
    tone(5, 130.8);                 // 5번핀에 주파소 신호 130.8을 출력
  }
  else if(digitalRead(12) == HIGH) {// 그게아니라 12번에 HIGH신호가 입력되면
    tone(5, 155.6);                 // 5번 핀에 주파소 신호 130.8을 출력
  }
  else if(digitalRead(11) == HIGH) {// 이하 생략
    tone(5, 164.8);
  }
  else if(digitalRead(10) == HIGH) {
    tone(5, 174.6);
  }
  else if(digitalRead(9) == HIGH) {
    tone(5, 196.0);
  }
  else if(digitalRead(8) == HIGH) {
    tone(5, 220.0);
  }
  else if(digitalRead(7) == HIGH) {
    tone(5, 249.9);
  }
  else if(digitalRead(6) == HIGH) {
    tone(5, 261.6);
  }
  else {
    noTone(5);
  }
}
