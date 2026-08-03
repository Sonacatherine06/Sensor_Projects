# Ultrasonic Sensor using Arduino

![Arduino](https://img.shields.io/badge/Arduino-Uno-333333)
![C++](https://img.shields.io/badge/Language-C++-00534E)

This project measures the distance to an object using an **HC-SR04 ultrasonic sensor** and displays the reading in centimeters on the Serial Monitor.

## Description

The HC-SR04 sensor emits a 40 kHz ultrasonic pulse and measures the time it takes for the echo to return. The Arduino calculates distance using the speed of sound (340 m/s).

## Hardware Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | — |

## Circuit Connections

| HC-SR04 Pin | Arduino Uno |
|-------------|-------------|
| VCC | 5V |
| Trig | Digital Pin 9 |
| Echo | Digital Pin 10 |
| GND | GND |

## How It Works

1. Arduino sends a 10 μs HIGH pulse to the Trig pin.
2. The sensor emits an ultrasonic wave that travels to the object and reflects back.
3. The Echo pin outputs a pulse whose width equals the round-trip time.
4. Distance = `(duration × 0.0343) / 2` cm (divided by 2 for one-way distance).

## Code

```cpp
const int trigPin = 9;
const int echoPin = 10;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2;
  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);
}
```

## Expected Output

```
Distance = 12.45 cm
Distance = 18.76 cm
Distance = 25.31 cm
```

## Learning Outcomes

- Ultrasonic time-of-flight distance measurement
- `pulseIn()` function usage
- Speed of sound distance calculation

## License

Part of the **Sensor_Projects** repository, MIT License.
