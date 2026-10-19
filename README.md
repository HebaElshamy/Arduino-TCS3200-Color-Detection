# 🎨 Arduino Color Detection System Using TCS3200

## 📌 Project Overview

This project is an Arduino-based Color Detection System that uses the **TCS3200 Color Sensor** to recognize four different colors: Red, Green, Yellow, and Blue.

When the sensor detects a color, the Arduino automatically turns on the corresponding LED while keeping the other LEDs off.

The project demonstrates how sensors, Arduino programming, and electronic components can work together to create an interactive color recognition system.

## 🛠️ Components Required

- Arduino UNO
- TCS3200 Color Sensor
- 4 LEDs (Red, Green, Yellow, Blue)
- 4 × 220Ω Resistors
- Mini Breadboard
- Jumper Wires
- USB Cable

## 🔌 Circuit Connections

### TCS3200 Color Sensor

| Sensor Pin | Arduino Pin |
|---|---|
| VCC | 5V |
| GND | GND |
| S0 | D4 |
| S1 | D5 |
| S2 | D6 |
| S3 | D7 |
| OUT | D8 |
| OE | GND |

### LED Connections

| LED Color | Arduino Pin |
|---|---|
| 🔴 Red | D9 |
| 🟢 Green | D10 |
| 🟡 Yellow | D11 |
| 🔵 Blue | D12 |

Each LED is connected through a 220Ω resistor, with a common ground connection.

## ⚙️ How It Works

1. The TCS3200 sensor detects light reflected from a colored object.
2. Arduino reads the sensor's red, green, and blue frequency signals.
3. The readings are compared using calibrated color detection conditions.
4. The LED corresponding to the detected color turns on.
5. The other LEDs remain off.
6. If the readings do not match any defined color, all LEDs turn off.

## 💻 Technologies Used

- Arduino UNO
- Embedded C/C++
- Arduino IDE
- TCS3200 RGB Color Sensor
- Basic Electronics

## 🎥 Project Demonstration

Watch the project in action!

**Demo Video:** Coming Soon

The demonstration will show the sensor recognizing different colors and activating their corresponding LEDs.

## 🚀 Getting Started

1. Connect the components according to the wiring tables.
2. Open Arduino IDE.
3. Connect Arduino UNO to your computer.
4. Open the Arduino source code (`.ino`).
5. Select the correct board and port.
6. Upload the code.
7. Place colored objects in front of the sensor.
8. Observe the corresponding LEDs turning on.

## 🎯 Learning Outcomes

This project demonstrates:

- Interfacing color sensors with Arduino
- Reading and processing sensor signals
- Using conditional statements
- Controlling multiple LEDs
- Understanding RGB color detection
- Building interactive embedded systems

## 🔮 Future Improvements

- Add an OLED display to show detected colors.
- Implement automatic color calibration.
- Add a buzzer for audio feedback.
- Expand the system to recognize more colors.
- Develop an automated color sorting system.

## 👩‍💻 Project Type

Arduino | Embedded Systems | Electronics | Color Recognition

---

⭐ If you find this project useful, consider giving the repository a star!
