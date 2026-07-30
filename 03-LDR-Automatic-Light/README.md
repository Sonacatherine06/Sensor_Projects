# LDR Automatic Light using Arduino

## Description
An LED automatically turns ON in darkness and OFF in bright light.

## Components
- Arduino Uno
- LDR
- LED
- 220 Ω Resistor
- 10 kΩ Resistor
- Jumper Wires

## Connections
- LDR → A0
- LED → Digital Pin 13

## Working
Arduino reads the light intensity from the LDR. When the light level decreases below the threshold, the LED turns ON automatically.

## Output
Dark → LED ON
Bright → LED OFF
