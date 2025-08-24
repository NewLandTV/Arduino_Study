const int chattering = 0;
const int W_SparrowPin = 2;
const int A_SparrowPin = 3;
const int S_SparrowPin = 4;
const int D_SparrowPin = 5;

// 버튼 눌림 감지 true : 버튼을 누를면 false : 버튼을 때면
bool W_IsPress = true;
bool A_IsPress = true;
bool S_IsPress = true;
bool D_IsPress = true;

void setup() {
  sparrowIntiPin();
  Serial.begin(9600);
}

void loop() {
  sparrowSendKey();  
  Serial.flush();
}

// 핀모드 설정 함수
void sparrowIntiPin() {
  pinMode(W_SparrowPin, INPUT_PULLUP);
  pinMode(A_SparrowPin, INPUT_PULLUP);
  pinMode(S_SparrowPin, INPUT_PULLUP);
  pinMode(D_SparrowPin, INPUT_PULLUP);
}

void sparrowSendKey() {
  if (digitalRead(W_SparrowPin) == LOW) {
    if (W_IsPress) {
      Serial.println("sP@R*0w W D");
      W_IsPress = false;
      delay(chattering);
    }
    else if (!W_IsPress) {
      Serial.println("sP@R*0w W U");
      W_IsPress = true;
      delay(chattering);
    }
  }
  if (digitalRead(A_SparrowPin) == LOW) {
    if (A_IsPress) {
      Serial.println("sP@R*0w A D");
      A_IsPress = false;
      delay(chattering);
    }
    else if (!A_IsPress) {
      Serial.println("sP@R*0w A U");
      A_IsPress = true;
      delay(chattering);
    }
  }
  if (digitalRead(S_SparrowPin) == LOW) {
    if (S_IsPress) {
      Serial.println("sP@R*0w S D");
      S_IsPress = false;
      delay(chattering);
    }
    else if (!S_IsPress) {
      Serial.println("sP@R*0w S U");
      S_IsPress = true;
      delay(chattering);
    }
  }
  if (digitalRead(D_SparrowPin) == LOW) {
    if (D_IsPress) {
      Serial.println("sP@R*0w D D");
      D_IsPress = false;
      delay(chattering);
    }
    else if (!D_IsPress) {
      Serial.println("sP@R*0w D U");
      D_IsPress = true;
      delay(chattering);
    }
  }
}