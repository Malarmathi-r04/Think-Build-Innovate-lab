# Activity 04 – Ultrasonic Sensor

## 1. Objective

To understand distance measurement using an ultrasonic sensor and Arduino by measuring the distance of an object using ultrasonic waves.

## 2. Components Used

* Arduino UNO
* HC-SR04 Ultrasonic Sensor
* Breadboard
* Jumper Wires

## 3. Circuit Diagram

The circuit was designed and simulated using Tinkercad.

![Circuit Diagram](circuit.png)

## 4. Arduino Program

The Arduino program is available in the `code.ino` file.

## 5. Output

The ultrasonic sensor measures the distance between the sensor and an object. The measured distance is displayed in centimeters through the Serial Monitor.

## 6. Learning Outcome

* Understood the working principle of an ultrasonic sensor.
* Learned the use of `digitalWrite()` and `digitalRead()`.
* Learned how to generate and receive ultrasonic pulses.
* Learned how to calculate distance using the time taken by the ultrasonic wave.
* Understood how Arduino can be used for distance measurement.

## 7. Challenges Faced

* Initially checked the VCC, GND, Trig, and Echo connections.
* Verified the correct Arduino pin numbers.
* Checked the sensor response for different object distances.
* Verified the distance values in the Serial Monitor.
* Corrected any syntax errors in the Arduino code.

## 8. Real-World Applications

* Obstacle detection
* Parking assistance systems
* Automatic doors
* Robotics
* Water-level measurement

## 9. Connection to Your PoC

The ultrasonic sensor concept can be used for obstacle detection and distance measurement in my final Proof of Concept (PoC).
