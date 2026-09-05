# Activity 05 – PIR Sensor

## 1. Objective

To understand motion detection using a PIR (Passive Infrared) sensor and Arduino by detecting the movement of a person or object.

## 2. Components Used

* Arduino UNO
* PIR Motion Sensor
* LED
* 220 Ω Resistor
* Breadboard
* Jumper Wires

## 3. Circuit Diagram

The circuit was designed and simulated using Tinkercad.

![Circuit Diagram](circuit.png)

## 4. Arduino Program

The Arduino program is available in the `code.ino` file.

## 5. Output

When motion is detected by the PIR sensor, the LED turns ON. When no motion is detected, the LED turns OFF. The motion status is also displayed in the Serial Monitor.

## 6. Learning Outcome

* Understood the working principle of a PIR sensor.
* Learned how to detect motion using digital input.
* Learned the use of `digitalRead()`.
* Learned how to control an LED based on sensor input.
* Understood the use of sensors in Arduino-based systems.

## 7. Challenges Faced

* Initially checked the PIR sensor VCC, GND, and signal connections.
* Verified the correct Arduino pin number.
* Checked the LED and resistor connections.
* Tested the sensor for different motion conditions.
* Verified the motion status in the Serial Monitor.
* Corrected any syntax errors in the Arduino code.

## 8. Real-World Applications

* Security alarm systems
* Automatic lighting systems
* Smart home systems
* Intruder detection
* Automatic doors

## 9. Connection to Your PoC

The PIR sensor concept can be used for motion detection and automatic activation of devices in my final Proof of Concept (PoC).
