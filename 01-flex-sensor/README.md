# Flex Sensor using Arduino

![Arduino](https://img.shields.io/badge/Arduino-Uno-333333)
![C++](https://img.shields.io/badge/Language-C++-00534E)

This project reads the bending of a **flex sensor** using an Arduino Uno and displays the sensor value on the Serial Monitor.

## Description

The flex sensor's resistance changes when bent. The Arduino reads the analog value from pin **A0** and prints it to the Serial Monitor. A 1 kΩ resistor forms a voltage divider with the flex sensor.

## Hardware Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Flex Sensor | 1 |
| 10 kΩ Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | — |

## Circuit Connections

| Flex Sensor | Arduino Uno |
|-------------|-------------|
| One end | 5V |
| Other end | A0 and 10kΩ to GND |

## How It Works

The flex sensor is wired in a voltage divider circuit with a 10 kΩ pull-down resistor. When the sensor bends, its resistance increases, lowering the voltage at A0. The Arduino's 10-bit ADC (0–1023) converts this voltage to a digital value.

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
Flex Value: 120
Flex Value: 340
Flex Value: 650
```

Values increase as the sensor bends more.

## Learning Outcomes

- Voltage divider circuits
- Analog sensor reading with `analogRead()`
- Serial Monitor data display

## License

Part of the **Sensor_Projects** repository, MIT License.
