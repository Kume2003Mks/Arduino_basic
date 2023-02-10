void setup() {
  for (int i = 2; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 2; i <= 10; ++i) {
    digitalWrite(i, HIGH);
    delay(1000);
  }
  for (int i = 10; i >= 2; --i) {
    digitalWrite(i, LOW);
    delay(1000);
  }
}