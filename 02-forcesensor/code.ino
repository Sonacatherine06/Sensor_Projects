void setup() {
  Serial.begin(9600);
}

void loop() {
  int forceValue = analogRead(A0);

  Serial.print("Force Value: ");
  Serial.println(forceValue);

  delay(500);
}