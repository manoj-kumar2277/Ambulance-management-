Abstract
The Ambulance / Transport Management System is a simple, terminal-based application written in C, designed to help manage ambulance records effectively. The system provides essential features such as adding new ambulance entries, searching for ambulances by ID, updating existing details like location and status, and deleting records when needed.
All ambulance information is stored persistently in a binary ambulance.dat file, ensuring data remains available across multiple program sessions.
The program uses a clean, menu-driven interface suitable for beginners and small transport/emergency setups. This project demonstrates key C programming concepts such as file handling, structures, arrays, and menu-based control flow, offering a lightweight and practical solution for managing ambulance data.

🚨 Features of the Program
✔ Add new ambulance records with details:
Ambulance ID


Driver Name


Ambulance Type (Basic / Advanced / ICU)


Current Location


Status (Available / Busy / Offline)


Contact Number


✔ View all stored ambulance records in a clean table format
✔ Search ambulance by ID
✔ Update ambulance details (location, status, contact)
✔ Delete ambulance records from the database
✔ Persistent data storage using a .dat file
✔ Fully terminal-based (CLI) interface
✔ Beginner-friendly, well-structured C source code
✔ Automatically creates ambulance.dat if it does not exist
✔ Basic error handling for invalid input and missing files

🖥 Technical Requirements
1. System Requirements
OS: Windows / Linux / macOS


Terminal / Command-line


Minimum RAM: 4 MB


Minimal disk space (for ambulance.dat)



2. Software Requirements
C Compiler (GCC / Clang / MinGW / MSVC)


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


