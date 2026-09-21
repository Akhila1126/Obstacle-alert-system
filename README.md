# Obstacle-alert-system
Arduino obstacle alert using HC-SR04
# Obstacle Alert System using Arduino and HC-SR04

## 📌 Project Description
This project is an Arduino-based Obstacle Alert System that detects nearby objects using an ultrasonic sensor (HC-SR04) and alerts the user with a buzzer. It is useful for blind assistance, vehicle parking systems, and robotics.

## 🧩 Components Required
- Arduino Uno R3
- HC-SR04 Ultrasonic Sensor
- Buzzer
- Jumper Wires
- Breadboard

## 🔌 Circuit Connections
- HC-SR04 VCC -> Arduino 5V
- HC-SR04 GND -> Arduino GND
- HC-SR04 Trig -> Arduino Pin 9
- HC-SR04 Echo -> Arduino Pin 8
- Buzzer +ve -> Arduino Pin 7
- Buzzer -ve -> Arduino GND

## ⚙️ How it Works
1. The ultrasonic sensor sends out sound waves from the Trig pin.
2. The waves hit an obstacle and reflect back to the Echo pin.
3. Arduino calculates the distance using the formula: Distance = (Time x Speed of Sound) / 2
4. If the distance is less than 400cm, the buzzer beeps to alert the user.
5. The distance is also displayed on the Serial Monitor.

## 💻 Code Explanation
- `trigPin` and `echoPin` are used to trigger and receive the ultrasonic waves.
- `pulseIn()` function measures the time taken for the wave to return.
- Distance in cm is calculated as `duration * 0.034 / 2`.
- If object is within 400cm, `tone()` function activates the buzzer.

## ✨ Features
- Detects obstacles up to 400cm (even at 332cm)
- Real-time distance monitoring via Serial Monitor
- Low-cost and easy to implement

## 🚀 Applications
- Blind stick assistance
- Car parking sensor
- Robot obstacle avoidance
