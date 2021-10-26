int A = A0
        , B = A1
              , C = A2
                    , D = 2
                          , E = 4
                                , F = 7
                                      , G = 8
                                          , DP = 13
                                              , D1 = 5
                                                  , D2 = 6
                                                      , D3 = 9
                                                          , D4 = 10;
void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
  pinMode(12, INPUT_PULLUP);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  Serial.begin(9600);
  pinMode(A5, OUTPUT);
}

void displayNumber1() {
  for (int digit = 0; digit <= 9; digit ++) {
    displaySegment(digit);
    //analogWrite(5,analogRead(A5));

    digitalWrite(D3, HIGH);
    delay(500);
    digitalWrite(D3, LOW);
  }
}
void displayNumber2() {
  for (int digit = 9; digit >= 0; digit --) {
    displaySegment(digit);
    //analogWrite(5,analogRead(A5));
    delay(500);
    digitalWrite(D1, HIGH);
    //digitalWrite(D2, HIGH);
    //digitalWrite(D3, HIGH);
   // digitalWrite(D4, HIGH);
  }
}
void displaySegment(int n) {
  switch (n) {
    case 1:
      digitalWrite(A, LOW);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      break;

    case 2:
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, LOW);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, LOW);
      digitalWrite(G, HIGH);
      break;

    case 3:
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, HIGH);
      break;

    case 4:
      digitalWrite(A, LOW);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      break;

    case 5:
      digitalWrite(A, HIGH);
      digitalWrite(B, LOW);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, LOW);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      break;

    case 6:
      digitalWrite(A, HIGH);
      digitalWrite(B, LOW);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      break;

    case 7:
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      break;

    case 8:
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      break;

    case 9:
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, LOW);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      break;

    case 0:
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, LOW);
      break;
  }

}
void loop() {

  Serial.println(digitalRead(12));
  if (!digitalRead(12)) {
    displayNumber1();
  }
  else {
    displayNumber2();
  }


}
