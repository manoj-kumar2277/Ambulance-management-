##Abstract
The Ambulance / Transport Management System is a simple, terminal-based application written in C, designed to help manage ambulance records effectively. The system provides essential features such as adding new ambulance entries, searching for ambulances by ID, updating existing details like location and status, and deleting records when needed.
All ambulance information is stored persistently in a binary ambulance.dat file, ensuring data remains available across multiple program sessions.
The program uses a clean, menu-driven interface suitable for beginners and small transport/emergency setups. This project demonstrates key C programming concepts such as file handling, structures, arrays, and menu-based control flow, offering a lightweight and practical solution for managing ambulance data.


---

# 🚑 **AMBULANCE / TRANSPORT MANAGEMENT SYSTEM**  
### *(C Programming Project)*

---

## 📘 **Overview**

The **Ambulance / Transport Management System** is a **terminal-based C application** designed to efficiently manage ambulance details such as driver information, type, location, status, and contact number.

This program demonstrates important C programming concepts like **structures**, **file handling**, **arrays**, and **menu-driven control flow**, making it suitable for **beginners**, **students**, and **mini-projects**.

---

## 📄 **Abstract**

The system allows users to **add**, **search**, **update**, **view**, and **delete** ambulance records.  
All data is stored in a **binary file (`ambulance.dat`)**, ensuring permanent storage even after the program exits.

This project is ideal for learning how file operations work in real-world applications.

---

## ✨ **Features**

| Feature | Description |
|--------|-------------|
| ➕ Add | Add new ambulance records |
| 📋 View | Display all stored records in a proper table |
| 🔍 Search | Search ambulance by ID |
| ✏️ Update | Update status, contact, or location |
| ❌ Delete | Remove ambulance from database |
| 💾 File Storage | Saves data in `ambulance.dat` (binary) |
| 🖥 CLI | Fully menu-driven terminal interface |
| ⚙️ Auto File Creation | Creates data file if missing |
| 🚫 Input Validation | Basic error handling for invalid entries |

---

## 🧰 **Technologies Used**

- **Language:** C  
- **Concepts:** File Handling, Structures, Strings, Arrays  
- **Interface:** CLI (Command Line)

---

## 🖥 **System Requirements**

### **Hardware**
- 4 MB RAM (minimum)
- Few KB disk storage for data file

### **Software**
- C Compiler: GCC / MinGW / Clang / MSVC  
- Editor: VS Code / Code::Blocks / Dev-C++ / Notepad++  
- OS: Windows / Linux / macOS

---

## 📦 **Header Files Used**

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



Any text editor / IDE:


VS Code


Code::Blocks


Dev-C++


Vim / Nano


Optional: Make tool (if using Makefile)



3. Programming Requirements
Language: C


C Standards Supported: C89 / C99 / C11


Required Standard Libraries:


<stdio.h>


<stdlib.h>


<string.h>



4. File Handling Requirements
Read/write access to project folder


Records saved in binary: ambulance.dat


Program automatically creates file if missing



5. Compilation Requirements
Program must compile without errors


Recommended warning flag:


gcc ambulance.c -o ambulance -Wall


⚙️ Functional Requirements
1. User Interface
Fully terminal-based


Displays a clear menu


Takes user input and validates it



2. Ambulance Record Operations
🚑 Add Ambulance
Save new ambulance details to the database.
🔍 Search Ambulance
Search by Ambulance ID.
📋 View All Ambulances
Display all saved ambulance records.
✏ Update Ambulance
Modify:
Current Location


Status


Contact Number


❌ Delete Ambulance
Remove an ambulance entry (with confirmation).

3. Data Management
Uses persistent binary file: ambulance.dat


Data remains saved across multiple runs


Handles missing or empty files smoothly



4. Program Flow
Menu-driven loop


Runs until user selects Exit


Provides confirmation and meaningful error messages


Smooth navigation between menu options



▶ How to Run the Program
1. Compile the Program
Open terminal in the project directory:
On Linux / macOS:
gcc ambulance.c -o ambulance

On Windows (MinGW):
gcc ambulance.c -o ambulance.exe


2. Run the Executable
Linux/macOS:
./ambulance

Windows:
ambulance.exe


3. Data File
The program automatically creates ambulance.dat if missing


All ambulance records are saved and loaded from this file


