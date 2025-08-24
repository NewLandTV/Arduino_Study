const unsigned int led[7] = { 2, 3, 4, 5, 6, 7, 8 };  // led 사용pin은 2~8번까지
const unsigned int com[5] = { -1, 9, 10, 11, 12 };  // com1~4 까지 4개 pin이 있는데, com[0]은 -1로 사용하지 않음
const unsigned int num[10][7] = {
  { 1, 1, 1, 1, 1, 1, 0 },  /*0*/
  { 0, 1, 1, 0, 0, 0, 0 },  /*1*/
  { 1, 1, 0, 1, 1, 0, 1 },  /*2*/
  { 1, 1, 1, 1, 0, 0, 1 },  /*3*/
  { 0, 1, 1, 0, 0, 1, 1 },  /*4*/
  { 1, 0, 1, 1, 0, 1, 1 },  /*5*/
  { 1, 0, 1, 1, 1, 1, 1 },  /*6*/
  { 1, 0, 1, 1, 1, 1, 1 },  /*7*/
  { 1, 1, 1, 1, 1, 1, 1 },  /*8*/
  { 1, 1, 1, 1, 0, 1, 1 },  /*9*/
};

void dis_init() {
  for(int x = 0; x < 7; x++) {
    pinMode(led[x], OUTPUT);
  }
  for(int y = 1; y <= 4; y++) {
    pinMode(com[y], OUTPUT);
  }
}

void dis_clear() {
  for(int x = 0; x < 7; x++) {
    digitalWrite(led[x], LOW);
  }
  for(int y = 1; y <= 4; y++) {
    digitalWrite(com[y], HIGH); // 공통 음극은 com pin을 High로 해야 동작하지 않는 것임
  }
}

void dis_number(unsigned int n, unsigned int m) {
  dis_clear();

  if(0 <= n && n <= 9 && 1 <= m && m <= 4) {
    for(int x = 0; x < 7; x++) {
      digitalWrite(led[x], num[n][x] == 1 ? HIGH:LOW);
    }
    digitalWrite(com[m], LOW);
  }
}

void setup() {
  dis_init();
}

void loop() { 
  dis_number(8, 1); // com1에 8을 보여라
  delay(500);
  dis_number(5, 2); // com2에 5을 보여라
  delay(500);
  dis_number(3, 3); // com3에 3을 보여라
  delay(500);
  dis_number(9, 4); // com4에 9을 보여라
  delay(500);
}
