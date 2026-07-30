void setup() {
  Serial.begin(9600);
}

void loop() {
  int flexValue = analogRead(A0);

  Serial.print("Flex Value: ");
  Serial.println(flexValue);

  delay(500);
}