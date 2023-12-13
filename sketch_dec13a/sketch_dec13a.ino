int buzzerPin = 3;

void setup() {
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  digitalWrite(buzzerPin, HIGH);
  delay(1);
  digitalWrite(buzzerPin, LOW);
  delay(999);
}
