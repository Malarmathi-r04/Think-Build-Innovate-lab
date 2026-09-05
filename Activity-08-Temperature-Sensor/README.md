Activity 08 – Temperature Sensor
1. Objective

To understand temperature sensing using an Arduino and TMP36 temperature sensor by measuring the temperature and indicating different temperature levels using LEDs.

2. Components Used
Arduino UNO
TMP36 Temperature Sensor
Yellow LED
Blue LED
Green LED
3 × 220 Ω Resistors
Breadboard
Jumper Wires
3. Circuit Diagram

The circuit was designed and simulated using Tinkercad.

4. Arduino Program

The Arduino program is available in the code.ino file.

5. Output

The TMP36 sensor measures the surrounding temperature and provides an analog voltage to the Arduino.

The LEDs indicate different temperature conditions:

🟢 Green LED – Normal temperature
🔵 Blue LED – Low temperature
🟡 Yellow LED – High temperature

The measured temperature is also displayed in the Serial Monitor.

6. Learning Outcome
Understood the working principle of a temperature sensor.
Learned how to interface a TMP36 sensor with Arduino.
Learned the use of analogRead().
Learned how to convert analog sensor values into temperature.
Learned how to control multiple LEDs based on temperature conditions.
Understood analog sensor interfacing.
7. Challenges Faced
Initially checked the TMP36 sensor connections.
Verified the sensor's VCC, GND, and output connections.
Verified the Arduino analog input pin.
Checked the LED and resistor connections.
Tested different temperature values in Tinkercad.
Corrected any syntax errors in the Arduino code.
8. Real-World Applications
Temperature monitoring systems
Weather monitoring
Smart home systems
Industrial temperature monitoring
Electronic equipment protection
HVAC systems
9. Connection to Your PoC

The temperature sensor concept can be used to continuously monitor temperature and provide visual or automatic alerts when the temperature goes beyond a safe range in my final Proof of Concept (PoC).
