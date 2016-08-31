  void setup() {
  pinMode(8, OUTPUT);
  pinMode(2, INPUT);
}

  void loop() {
if (digitalRead(2) == HIGH) {
  digitalWrite(8, HIGH);
  }
  else {
   digitalWrite(8, LOW);
  }
 }

