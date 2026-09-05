# Activity 07 – Soil Moisture Sensor

## 1. Objective

To understand analog sensor interfacing using Arduino by measuring the moisture level present in soil.

## 2. Components Used

* Arduino UNO
* Soil Moisture Sensor
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

The soil moisture sensor detects the moisture level in the soil and provides an analog value. The Arduino reads this value and displays the corresponding moisture reading in the Serial Monitor.

## 6. Learning Outcome

* Understood analog sensor interfacing with Arduino.
* Learned the use of `analogRead()`.
* Understood how a soil moisture sensor detects moisture.
* Learned how to read and monitor sensor values.
* Understood the application of sensors in smart agriculture systems.

## 7. Challenges Faced

* Initially checked the VCC, GND, and signal connections of the sensor.
* Verified the correct Arduino analog pin.
* Tested the sensor with different moisture conditions.
* Verified the sensor readings in the Serial Monitor.
* Corrected any syntax errors in the Arduino code.

## 8. Real-World Applications

* Smart irrigation systems
* Automatic plant watering
* Agriculture monitoring
* Greenhouse monitoring
* Soil condition monitoring

## 9. Connection to Your PoC

The soil moisture sensor concept can be used to monitor soil conditions and automatically control irrigation based on the moisture level in my final Proof of Concept (PoC).
