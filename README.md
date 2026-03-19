<div align="center">

# 🏥 MediConnect

A console-based hospital appointment booking system built in **C++** for the Introduction to Computing course — Semester 01.

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Console](https://img.shields.io/badge/Console-App-black?style=for-the-badge)
![Semester](https://img.shields.io/badge/Semester-1-green?style=for-the-badge)

</div>

---

## 📋 About

MediConnect is a simple terminal-based appointment management system. Users can browse hospital departments, view doctor profiles and consultation fees, book available time slots, and cancel existing appointments — all through a menu-driven interface.

> 📌 This was a semester assignment project for the subject **Introduction to Computing**.

---

## 🏨 Departments & Doctors

| Department | Doctors |
|------------|---------|
| 🦻 ENT | Dr. Ali , Dr. Khalid , Dr. Aliza |
| 🦴 Orthopedics | Dr. Abdullah Wahaj , Dr. Noman Shakeel , Dr. Imran Salim |
| 🩺 Gynecology | Dr. Shafaq , Dr. Tahira , Dr. Lubna |

Each doctor has **6 weekly time slots** (Mon–Sat) that can be booked or cancelled individually.

---

## ⚙️ Features

- Department and doctor selection via numbered menus
- View doctor specialization and consultation fees
- Book an available time slot
- Cancel an existing booking
- Handles fully booked doctors gracefully
- Input validation throughout

---

## 🚀 How to Run

### Option 1 — Any C++ Compiler
```bash
g++ mediconnect.cpp -o mediconnect
./mediconnect
```

### Option 2 — Visual Studio

1. Create a new **Empty C++ Project**
2. Add `mediconnect.cpp` to source files
3. Press **`Ctrl+F5`** to build and run

> No external libraries required — standard C++ only.

---

## 🗂️ Project Structure
```
projects/
└── 01-mediconnect/
    ├── !project.zip   
    ├── mediconnect.cpp
    └── README.md
```

<div align="center">
Made with ❤️ and C++ <br>
</div>
