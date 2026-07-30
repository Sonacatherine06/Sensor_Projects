# PIR Motion Sensor using Arduino

## Description
This project uses a PIR (Passive Infrared) motion sensor to detect human movement. When motion is detected, the Arduino displays a message on the Serial Monitor.

## Components Required
- Arduino Uno
- PIR Motion Sensor (HC-SR501)
- Jumper Wires

## Circuit Connections
| PIR Sensor | Arduino Uno |
|------------|-------------|
| VCC        | 5V          |
| GND        | GND         |
| OUT        | Digital Pin 2 |

## Working
The PIR sensor detects infrared radiation emitted by moving humans or animals. When motion is detected, the sensor outputs a HIGH signal. The Arduino reads this signal and displays **"Motion Detected"** on the Serial Monitor. If no motion is detected, it displays **"No Motion"**.

## Sample Output
```
No Motion
No Motion
Motion Detected
Motion Detected
No Motion
```

## Files Included
- code.ino
- circuit.png
- output.png
- README.md

## Applications
- Home Security Systems
- Automatic Lighting
- Motion Alarm Systems
- Smart Home Automation
- Energy Saving Systems
