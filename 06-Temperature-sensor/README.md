# Temperature Sensor using Arduino

![Arduino](https://img.shields.io/badge/Arduino-Uno-333333)
![C++](https://img.shields.io/badge/Language-C++-00534E)

This project measures temperature using a **TMP36** temperature sensor and displays the reading in degrees Celsius on the Serial Monitor.

## Description

The TMP36 sensor outputs an analog voltage proportional to temperature (10 mV per °C, with 0.5V at 25°C). The Arduino reads this voltage on pin **A0** and converts it to a temperature value.

## Hardware Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| TMP36 Temperature Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | — |

## Circuit Connections

| TMP36 Pin | Arduino Uno |
|-----------|-------------|
| VCC (Pin 1) | 5V |
| VOUT (Pin 2) | A0 |
| GND (Pin 3) | GND |

## How It Works

1. The TMP36 outputs 10 mV/°C with a 500 mV offset (0.5V = 25°C).
2. The Arduino reads the analog voltage on A0 (0–1023 range).
3. Voltage is calculated: `voltage = sensorValue × 5.0 / 1023.0`
4. Temperature is converted: `temperature = (voltage - 0.5) × 100`

## Code

```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * 5.0 / 1023.0;
  float temperature = (voltage - 0.5) * 100;
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  delay(1000);
}
```

## Expected Output

```
Temperature: 26.5 °C
Temperature: 28.1 °C
Temperature: 30.0 °C
```

## Learning Outcomes

- TMP36 temperature sensor characteristics (10 mV/°C)
- Analog-to-voltage and voltage-to-temperature conversion
- Serial Monitor formatted output with units

## License

Part of the **Sensor_Projects** repository, MIT License.
