# Microphone Sensor using Arduino

![Arduino](https://img.shields.io/badge/Arduino-Uno-333333)
![C++](https://img.shields.io/badge/Language-C++-00534E)

This project uses a **microphone/sound sensor module** connected to pin **A0** and displays sound level readings on the Serial Monitor.

## Description

The microphone sensor module outputs an analog voltage proportional to the ambient sound level. The Arduino reads this analog value from pin **A0** and prints it continuously to the Serial Monitor.

## Hardware Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Sound Sensor Module | 1 |
| Breadboard | 1 |
| Jumper Wires | — |

## Circuit Connections

| Sound Sensor | Arduino Uno |
|-------------|-------------|
| VCC | 5V |
| GND | GND |
| OUT | A0 |

## How It Works

The microphone sensor's onboard amplifier boosts the microphone signal and outputs an analog voltage proportional to sound intensity. The Arduino's ADC converts this to a digital value (0–1023), which is printed to the Serial Monitor.

## Code

```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  int soundValue = analogRead(A0);
  Serial.print("Sound Value: ");
  Serial.println(soundValue);
  delay(100);
}
```

## Expected Output

```
Sound Value: 120
Sound Value: 380
Sound Value: 650
```

Values fluctuate rapidly with ambient noise levels.

## Learning Outcomes

- Electret microphone sensor interfacing
- Amplified analog signal reading
- Real-time audio level monitoring

## License

Part of the **Sensor_Projects** repository, MIT License.
