// 조이스틱 조종 값 시리얼 모니터에 출력하기
int kpin = 7, xpin = A0, ypin = A1;

void setup() {
  Serial.begin(9600);
  pinMode(kpin, INPUT);
  digitalWrite(kpin, HIGH);
}

void loop() {
  // 스우치 및 X, Y 축 값 읽어오기
  int swValue = digitalRead(kpin);
  int xValue = digitalRead(kpin);
  int yValue = digitalRead(kpin);

  // 시리얼 모니터 츨력
  Serial.print("Switch : ");
  Serial.println(swValue);
  Serial.print("X-axis : ");
  Serial.println(xValue);
  Serial.print("y-axis : ");
  Serial.println(yValue);
}
