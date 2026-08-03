# Potentiometer using Arduino

![Arduino](https://img.shields.io/badge/Arduino-Uno-333333)
![C++](https://img.shields.io/badge/Language-C++-00534E)

This project reads the position of a **potentiometer** and displays the analog value on the Serial Monitor.

## Description

A potentiometer is a three-terminal variable resistor. The outer pins connect to 5V and GND, while the middle (wiper) pin outputs a voltage proportional to the shaft position. The Arduino reads this on pin **A0** and displays the value (0–1023).

## Hardware Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Potentiometer (10kΩ) | 1 |
| Breadboard | 1 |
| Jumper Wires | — |

## Circuit Connections

| Potentiometer | Arduino Uno |
|---------------|-------------|
| VCC (left pin) | 5V |
| GND (right pin) | GND |
| Wiper (middle pin) | A0 |

## How It Works

The potentiometer forms a voltage divider between 5V and GND. Rotating the shaft changes the wiper voltage from 0V to 5V. The Arduino's 10-bit ADC converts this to a value from 0 (0V) to 1023 (5V).

## Code

```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  int flexValue = analogRead(A0);
  Serial.print("Flex Value: ");
  Serial.println(flexValue);
  delay(500);
}
```

## Expected Output

```
Value: 0
Value: 512
Value: 1023
```

> **Note:** The code prints "Flex Value:" — this is the original variable naming from the source file.

## Learning Outcomes

- Potentiometer as a variable voltage divider
- Analog input reading with `analogRead()`
- 10-bit ADC resolution (0–1023)

## License

Part of the **Sensor_Projects** repository, MIT License.
