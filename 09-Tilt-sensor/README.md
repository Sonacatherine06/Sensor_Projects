# 09 - Tilt Sensor

## Project Overview

This project demonstrates how to interface a Tilt Sensor with an Arduino Uno. The Tilt Sensor acts as a switch that changes its state when the sensor is tilted. The Arduino continuously monitors the sensor and displays the tilt status on the Serial Monitor.

---

## Components Required

- Arduino Uno
- Tilt Sensor
- Jumper Wires
- USB Cable

---

## Circuit Connections

| Tilt Sensor Pin | Arduino Uno |
|-----------------|-------------|
| Pin 1           | Digital Pin 2 |
| Pin 2           | GND |

> The Arduino uses the internal pull-up resistor (`INPUT_PULLUP`), so no external resistor is required.

---

## Working Principle

- The Tilt Sensor behaves like a switch.
- When the sensor is in its normal position, the Arduino reads a HIGH signal.
- When the sensor is tilted, the internal contacts close, connecting the pin to GND.
- The Arduino detects this change and prints **"Tilt Detected!"** on the Serial Monitor.

---

## Arduino Code

```cpp
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
```

---

## Output

Normal Position:
```

No Tilt

```

Tilted Position:
```

Tilt Detected!

```

---

## Applications

- Burglar Alarm Systems
- Anti-Theft Devices
- Motion Detection
- Industrial Equipment Monitoring
- Safety Systems
- Robotics

---

## Author

Sona Catherine

