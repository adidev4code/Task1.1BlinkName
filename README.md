# Task1.1BlinkName

# Task 1.1P – Arduino Nano 33 IoT: Blinking Name in Morse Code

This repository contains the source code and documentation for **Task 1.1P** from the Embedded Systems Development unit. The task introduces the Arduino Nano 33 IoT board and demonstrates a basic embedded programming application—blinking a name in Morse code using the board's in-built LED.

---

## 📘 Task Description

This task was divided into two parts:

### Part 1 – Device Setup
- Created an Arduino account using student credentials
- Installed **Arduino IDE 2** and required board definitions (`Arduino SAMD Boards`)
- Registered the **Arduino Nano 33 IoT** on the Arduino IoT Cloud platform
- Installed the Arduino Create Agent to manage device connection
- Captured a screenshot showing the **Device Name, Device ID, and Model** details

### Part 2 – LED Blink Program (Morse Code)
- Wrote a modular Arduino program that blinks the **built-in LED** (`LED_BUILTIN` / pin D13)
- Translated the name **"Aditya"** into Morse code:
  - `.` = short blink (200 ms)
  - `-` = long blink (600 ms)
  - Inter-symbol and letter spacing included for clarity
- Implemented modular functions: `dot()`, `dash()`, `getMorse()`, `blinkLetter()`, `blinkName()`, and `letterSpace()`

---

## 💡 Key Learning Outcomes

- Arduino Nano 33 IoT hardware and cloud setup
- Working with Arduino IDE and in-built peripherals
- Introduction to modular programming in embedded systems
- Translating characters to Morse code and controlling hardware through timed signals

---

## 📂 Repository Contents

| File Name       | Description                                      |
|-----------------|--------------------------------------------------|
| `BlinkName.ino` | Arduino sketch to blink "Aditya" in Morse code   |
| `README.md`     | Project overview and task documentation          |
| *(Optional)*    | Screenshot of device registration (Part 1 proof) |

---

## ▶️ Video Demonstration

A video has been recorded showing the Arduino Nano 33 IoT blinking the name "Aditya" in Morse code using its in-built LED.

📹 **Watch Here**: *[Insert YouTube or Deakin Panopto Link]*

---

## 🔗 GitHub Repository Link

👉 **Repository**: [https://github.com/YourUsername/Task1.1BlinkName](https://github.com/YourUsername/Task1.1BlinkName)  
*(Ensure this repository is set to **public** for assessment)*

---

## ✅ Submission Checklist

- [x] Device registered on Arduino IoT Cloud
- [x] Blink code written using modular functions
- [x] Video of LED blinking in Morse code uploaded
- [x] Code uploaded to public GitHub repository
- [x] Screenshot showing device info included
- [x] README file created and updated

---

## 🧑‍💻 Author

**Name:** Aditya Sharma  
**Unit:** Embedded Systems Development  
**Task:** 1.1P – Arduino Blink Name in Morse Code  
**Board Used:** Arduino Nano 33 IoT  
**Date:** July 2025

