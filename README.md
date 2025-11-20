
# 🚑 **Ambulance / Transport Management System (C Project)**

## 📄 **Abstract**
The **Ambulance / Transport Management System** is a simple, terminal-based application written in **C**, designed to manage ambulance records efficiently.  
It supports adding new ambulances, searching by ID, updating details, and deleting records.  
All data is saved persistently in a **binary file (ambulance.dat)**, ensuring availability across sessions.

This project demonstrates essential C programming concepts such as **file handling, structures, arrays, and menu-driven flow**, making it ideal for beginners and small emergency setups.

---

## 🚨 **Features of the Program**

### ✔ Add New Ambulance Records:
- Ambulance ID  
- Driver Name  
- Ambulance Type (Basic / Advanced / ICU)  
- Current Location  
- Status (Available / Busy / Offline)  
- Contact Number  

### ✔ Other Features:
- View all ambulance records (table format)
- Search ambulance by ID
- Update ambulance details (location, status, contact)
- Delete ambulance records
- Persistent binary storage (`ambulance.dat`)
- Creates data file automatically if missing
- Terminal-based (CLI)
- Beginner-friendly, clean code structure
- Basic error handling for invalid input

---

## 🖥 **Technical Requirements**

### **1. System Requirements**
- OS: Windows / Linux / macOS  
- Terminal / Command-line  
- Minimum RAM: 4 MB  
- Minimal disk space (for `ambulance.dat`)  

### **2. Software Requirements**
- C Compiler: GCC / Clang / MinGW / MSVC  
- Any IDE or editor:  
  - VS Code  
  - Code::Blocks  
  - Dev-C++  
  - Vim / Nano  
- Optional: Make tool  

### **3. Programming Requirements**
- Language: C  
- C Standards: **C89 / C99 / C11**  
- Required Libraries:  
  ```c
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>


### **4. File Handling Requirements**

* Read/write access to project folder
* Records stored in binary: `ambulance.dat`
* Auto-creates the file if missing

### **5. Compilation Requirements**

Recommended compilation:

```bash
gcc ambulance.c -o ambulance -Wall
```

---

## ⚙️ **Functional Requirements**

### **1. User Interface**

* Fully terminal-based
* Clean menu display
* Validates user inputs

### **2. Ambulance Record Operations**

#### 🚑 **Add Ambulance**

Stores new ambulance details.

#### 🔍 **Search Ambulance**

Search by **Ambulance ID**.

#### 📋 **View All Ambulances**

Displays all saved records.

#### ✏ **Update Ambulance**

Modify:

* Current Location
* Status
* Contact Number

#### ❌ **Delete Ambulance**

Removes an ambulance after confirmation.

---

## 🗂 **Data Management**

* Persistent binary file (`ambulance.dat`)
* Data saved across multiple program runs
* Handles missing/empty files gracefully

---

## 🔁 **Program Flow**

* Menu-driven loop
* Continues until user selects **Exit**
* Provides clear messages and smooth navigation

---

## ▶ **How to Run the Program**

### **1. Compile**

#### Linux / macOS:

```bash
gcc ambulance.c -o ambulance
```

#### Windows (MinGW):

```bash
gcc ambulance.c -o ambulance.exe
```

### **2. Run**

#### Linux / macOS:

```bash
./ambulance
```

#### Windows:

```bash
ambulance.exe
```

### **3. Data File**

* Auto-creates `ambulance.dat`
* Stores all ambulance records persistently

---

## 🖼 **Screenshots**

*(Replace with your real screenshots)*
1️⃣ Main Menu
2️⃣ Add Ambulance
3️⃣ View Ambulances
4️⃣ Search Ambulance
5️⃣ Update Ambulance
6️⃣ Delete Ambulance
7️⃣ Exit




