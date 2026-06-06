# 🤖 My Robotics & Embedded Projects

Welcome to my personal repository dedicated to my journey into robotics, embedded systems, and hardware hacking. This is a collection of all my custom-built robots, firmware, and CAD designs.

---

## 🚀 Active Projects

### 1. Simple 2-Wheel Autonomous Buggy (Current)
A lightweight, budget-friendly autonomous robot designed to clear hurdles using sensor feedback. Built using spare parts and tailored for maximum efficiency.

* **Brain:** Arduino Nano (ATmega328P)
* **Power Supply:** 3S 5000mAh LiPo Battery
* **Actuators:** 2x 5V DC Motors (controlled via C1061 Power Transistors + PWM speed regulation)
* **Sensors:** HC-SR04 Ultrasonic Sensor
* **Chassis & Wheels:** 3D Printed custom lightweight PLA chassis (designed in CAD, exported as `.3mf` for high-precision circular wheels). Features custom rubber-band/O-ring grip tires.
* **Features:** Custom firmware with a high-torque "start-kick" PWM burst to handle heavy LiPo weight and autonomous non-H-bridge obstacle avoidance.

---

## 🛠️ Tech Stack & Tools

* **Microcontrollers:** Arduino (AVR), ESP32-C3
* **Software / Firmware:** C++, Arduino IDE, ESPHome
* **Smart Home / Communication:** MQTT, Node-RED, Home Assistant integration
* **Mechanical Design:** Fusion 360, 3D Printing (PLA, Bambu Lab)

---

## 📁 Repository Structure

```text
├── 2wd-obstacle-bot/      # Arduino Nano 2-Wheel Robot
│   ├── firmware/          # Arduino .ino sketches
│   └── hardware/          # .3mf CAD files for wheels and chassis
├── README.md              # Main overview
└── [future-projects]/     # Placeholder for next builds (e.g., Robot Arm, PID Balancer)
