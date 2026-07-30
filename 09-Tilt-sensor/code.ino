const int tiltPin = 2;

void setup() {
  pinMode(tiltPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int sensorState = digitalRead(tiltPin);

  if (sensorState == LOW) {
    Serial.println("Tilt Detected!");
  } else {
    Serial.println("No Tilt");
  }

  delay(500);
}