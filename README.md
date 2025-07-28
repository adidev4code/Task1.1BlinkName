# Embedded Systems Development – Task 1.1P  
**Blinking Your Name in Morse Code Using Arduino Nano 33 IoT**

## 📘 Task Description

This task introduces the basic setup and programming of the Arduino Nano 33 IoT development board. It was divided into two main parts to help students get comfortable with both the hardware and software environments of embedded systems.

---

### 🔹 Part 1: Device Setup

In the first part, we created an Arduino account and connected the Nano 33 IoT board to the Arduino IoT Cloud. After installing the required Arduino IDE and SAMD board packages, we claimed the device and verified its connection. A screenshot of the device information (Device Name, Device ID, Model) was captured for submission.

---

### 🔹 Part 2: LED Blinking in Morse Code

In the second part, we programmed the in-built LED on the Arduino board to blink our **first name ("Aditya")** in **Morse code** using modular functions. Each character was converted into Morse format, and we used short (dot) and long (dash) LED blinks to represent each symbol. A delay was added between letters for clarity.

The code was written in a clean, modular format using custom functions such as:
- `blinkName()` – to loop through each character
- `getMorse()` – to return Morse code for a given character
- `dot()` and `dash()` – to control the LED timing
- `letterSpace()` – to manage spacing between letters

---

### 📌 Outcome

By completing this task, we learned how to:
- Set up and register an Arduino IoT device
- Use the built-in LED and digital output pins
- Apply modular programming principles for better structure and usability
- Represent and blink text in Morse code using basic Arduino functions

This task is a practical entry point into embedded systems programming and IoT development.

