# Force Sensitive Resistor (FSR) using Arduino

![Arduino](https://img.shields.io/badge/Arduino-Uno-333333)
![C++](https://img.shields.io/badge/Language-C++-00534E)

This project measures the pressure applied to a **Force Sensitive Resistor (FSR)** and displays the value on the Serial Monitor.

## Description

The FSR's resistance decreases when pressure is applied. The Arduino reads the analog value from pin **A0** and prints it to the Serial Monitor. A 1 kΩ pull-down resistor forms a voltage divider.

## Hardware Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Force Sensor (FSR) | 1 |
| 10 kΩ Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | — |

## Circuit Connections

| FSR | Arduino Uno |
|-----|-------------|
| One end | 5V |
| Other end | A0 and 10kΩ to GND |

## How It Works

The FSR is wired in a voltage divider with a 10 kΩ resistor. When pressure is applied, the FSR's resistance decreases, increasing the voltage at A0. The Arduino reads this analog value (0–1023).

## Code

```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  int forceValue = analogRead(A0);
  Serial.print("Force Value: ");
  Serial.println(forceValue);
  delay(500);
}
```

## Expected Output

```
Force Value: 0
Force Value: 280
Force Value: 720
```

Values increase with applied pressure.

## Learning Outcomes

- Force-sensitive resistor interfacing
- Voltage divider circuits
- Analog sensor reading with `analogRead()`

## License

Part of the **Sensor_Projects** repository, MIT License.
