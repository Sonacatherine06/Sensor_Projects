int pirPin = 2;
int motorPin = 9;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);

  if (motion == HIGH) {
    digitalWrite(motorPin, HIGH);
    Serial.println("Motion Detected - Motor ON");
  } else {
    digitalWrite(motorPin, LOW);
    Serial.println("No Motion - Motor OFF");
  }

  delay(500);
}