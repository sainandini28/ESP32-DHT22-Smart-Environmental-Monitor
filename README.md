# ESP32-DHT22-Smart-Environmental-Monitor
A temperature and humidity monitoring project using ESP32 and DHT22 sensor, developed as part of my Decode Labs IoT internship.

## 📌 Project Description

This project is a basic IoT-based environmental monitoring system developed using an ESP32 and a DHT22 sensor.

The DHT22 sensor measures the temperature and humidity of the surrounding environment. The ESP32 reads the sensor data and displays the temperature and humidity values on the Serial Monitor.

This project was developed as part of my IoT internship at Decode Labs.

---

## 🎯 Project Objective

To design and simulate a basic environmental monitoring system that can continuously measure temperature and humidity using a DHT22 sensor and ESP32.

---

## 🛠️ Components Used

- ESP32
- DHT22 Temperature and Humidity Sensor
- Wokwi Simulator
- Arduino Framework
- DHT Sensor Library

---

## 🔌 Circuit Connections

| DHT22 Pin | ESP32 Connection |
|-----------|------------------|
| VCC | 3V3 |
| DATA | GPIO 4 |
| GND | GND |

---

## ⚙️ Working Principle

1. The DHT22 sensor measures the temperature and humidity of the surrounding environment.
2. The sensor sends the measured data digitally to the ESP32 through its DATA pin.
3. The ESP32 receives the sensor data through GPIO 4.
4. The program processes the temperature and humidity readings.
5. The readings are displayed on the Serial Monitor.
6. The process repeats continuously at regular intervals.

---

## 💻 Output

The Serial Monitor displays the temperature and humidity readings continuously.

Example:

```text
Temperature: 30.70 °C
Humidity: 60.00 %
```
---
## 🔗 Live Simulation

You can view and interact with the project simulation here:

https://wokwi.com/projects/473977300287938561
