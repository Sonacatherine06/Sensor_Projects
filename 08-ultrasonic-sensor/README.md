# Ultrasonic Sensor Distance Measurement

## Overview
This project demonstrates how to measure the distance of an object using the HC-SR04 Ultrasonic Sensor with an Arduino Uno. The measured distance is displayed on the Serial Monitor in centimeters.

## Components Required
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Jumper Wires
- USB Cable

## Circuit Connections

| HC-SR04 Pin | Arduino Uno Pin |
|--------------|-----------------|
| VCC | 5V |
| TRIG | Digital Pin 9 |
| ECHO | Digital Pin 10 |
| GND | GND |

## Working
1. The Arduino sends a 10-microsecond pulse to the TRIG pin.
2. The HC-SR04 transmits an ultrasonic sound wave.
3. The sound wave reflects from the nearest object.
4. The ECHO pin receives the reflected wave.
5. Arduino calculates the distance using the time taken by the sound wave.
6. The distance is displayed on the Serial Monitor in centimeters.

## Output
Example Serial Monitor Output:

```
Distance: 12.45 cm
Distance: 18.76 cm
Distance: 25.31 cm
```

## Project Files
- `ultrasonic_sensor.ino` – Arduino program
- `ultrasonic_sensor_circuit.png` – Circuit diagram
- `ultrasonic_sensor_output.png` – Output screenshot
- `README.md` – Project documentation

## Applications
- Obstacle detection
- Robot navigation
- Distance measurement
- Parking assistance systems

## Author
**Sona Catherine**  
B.Tech Electronics and Communication Engineering
