# 10 - Push Button

## Project Overview

This project demonstrates how to interface a Push Button with an Arduino Uno. The push button acts as a digital input device. The Arduino continuously reads the button state and displays the corresponding value on the Serial Monitor.

---

## Components Required

- Arduino Uno
- Push Button
- Jumper Wires
- USB Cable

> **Note:** This project uses the Arduino's internal pull-up resistor (`INPUT_PULLUP`), so no external resistor is required.

---

## Circuit Connections

| Push Button | Arduino Uno |
|-------------|-------------|
| One Terminal | Digital Pin 2 |
| Other Terminal | GND |

---

## Working Principle

The push button is connected between Digital Pin 2 and GND. The Arduino enables its internal pull-up resistor using `INPUT_PULLUP`.

- Button Released → Pin reads **HIGH (1)**
- Button Pressed → Pin reads **LOW (0)**

The button state is displayed on the Serial Monitor.

---

## Arduino Code

```cpp
const int buttonPin = 2;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  delay(200);
}
```

---

## Output

Serial Monitor:

```
1
1
1
0
0
1
1
```

**Where:**
- **1** = Button Released
- **0** = Button Pressed

---

## Applications

- Menu Selection
- User Input Systems
- Home Automation Controls
- Robotics
- Industrial Control Panels
- Start/Stop Switches

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
