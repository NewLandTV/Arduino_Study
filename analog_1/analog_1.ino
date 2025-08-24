int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);  // 빨강 LED
  pinMode(10, OUTPUT);  // 노랑 LED
  pinMode(8, OUTPUT);   // 연두 LED
  pinMode(6, OUTPUT);   // 파랑 LED
}

void loop() {
  val = analogRead(A0);
  Serial.println(val);
  if(val == 1023) {
    digitalWrite(12, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
  }
  else if(val >= 823) {
    digitalWrite(12, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
  }
  else if(val >= 623) {
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(6, LOW);
  }
  else if(val >= 423) {
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, HIGH);
  }
  else {
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
  }
  delay(100);
}
