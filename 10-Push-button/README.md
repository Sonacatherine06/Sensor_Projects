# 10 - Push Button

## Project Overview

This project demonstrates how to interface a Push Button with an Arduino Uno. The Arduino continuously monitors the button state and prints whether the button is pressed or released on the Serial Monitor.

---

## Components Required

- Arduino Uno
- Push Button
- 10kΩ Resistor
- Breadboard
- Jumper Wires
- USB Cable

---

## Circuit Connections

| Push Button Pin | Arduino Uno |
|-----------------|-------------|
| One Terminal    | Digital Pin 2 |
| Other Terminal  | 5V |
| 10kΩ Resistor   | Between Digital Pin 2 and GND |

---

## Working Principle

A push button is a momentary switch. When the button is pressed, it completes the circuit and sends a HIGH signal to the Arduino. When released, the pull-down resistor keeps the input LOW. The Arduino reads the button state and displays the result on the Serial Monitor.

---

## Arduino Code

```cpp
const int buttonPin = 2;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    Serial.println("Button Pressed");
  } else {
    Serial.println("Button Released");
  }

  delay(200);
}
```

---

## Output

When the button is pressed:

```
Button Pressed
```

When the button is released:

```
Button Released
```

---

## Applications

- User Input Interface
- Home Automation Systems
- Industrial Control Panels
- Menu Navigation
- Start/Stop Controls
- Robotics Projects

---

## Project Structure

```
10-Push-Button/
│── README.md
│── push_button.ino
│── circuit.png
│── output.png
```

---

## Author

**Sona Catherine**

B.Tech Electronics and Communication Engineering (ECE)
