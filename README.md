# 💳 C++ Banking Management System

A simple, modular command-line Banking Management System developed in **C++**, using **Object-Oriented Programming (OOP)** and **binary file storage** to manage customer accounts and secure administrative operations.

---

## ✨ Features

### 🔐 Master Key Protection

* Secures sensitive actions like viewing **all customer data** and **changing the master key**.
* Stored in `MasterKey.dat` for persistent, secured access.
* Default Master Key: `0000`.

### 🧑‍💼 Customer Account Operations

* **Create New Account**
  Assigns a unique Customer ID ("Pin Code") and stores name and balance.
* **Modify Account**
  Update customer details such as name or balance.
* **Delete Account**
  Deletes an account using a temp file (`Temp.dat`) to maintain data integrity.
* **View Individual Account**
  Lookup account details using the Customer ID.
* **View All Accounts**
  Lists all accounts with names, IDs, and balances (requires Master Key).

### 💰 Financial Transactions

* **Deposit Funds**
  Add money to a customer’s balance.
* **Withdraw Funds**
  Subtract funds if the balance allows.

### 💾 Binary File-Based Storage

* `Bankdata.dat`: Stores all customer accounts.
* `MasterKey.dat`: Stores the master key securely.
* Data persists after program restarts.

---

## 📁 Project Structure

```bash
project/
├── main.cpp           # Entry point with menu navigation
├── Binary.h           # Declaration of Binary class (bank operations handler)
├── Binary.cpp         # Implementation of Binary class methods
├── BANK.h             # Declaration of BANK class (individual customer account)
├── BANK.cpp           # (Optional) Implementation of BANK class methods
├── Bankdata.dat       # (Generated) Customer records
├── MasterKey.dat      # (Generated) Master key for admin operations
└── Temp.dat           # (Temporary) Used during account deletion
```

---

## 🛠️ Compilation & Execution

### ✅ Prerequisites

* A working **C++ compiler** (e.g., `g++` via GCC or MinGW)

### 🔧 Compile

Navigate to the project directory and run:

```bash
g++ main.cpp Binary.cpp -o banking_system
```

Include `BANK.cpp` if it exists:

```bash
g++ main.cpp Binary.cpp BANK.cpp -o banking_system
```

### ▶️ Run

On **Linux/macOS**:

```bash
./banking_system
```

On **Windows**:

```cmd
.\banking_system.exe
```

---

## 📋 Menu Options

```text
Main Menu
--------------------------
1: Add New Customer
2: Modify Customer Data
3: Show Customer Data
4: Show All Customer Data (Requires Master Key)
5: Delete Customer Record
6: Deposit Amount
7: Withdraw Amount
8: Change Master Key
9: Exit
```

> Enter the **correct Master Key** when prompted for protected operations.
> Customer ID = "Pin Code" (used for uniquely identifying accounts)

---

## 💡 Design Considerations

* **Binary File I/O**
  Efficient and compact storage of structured data using `fstream`.

* **Security Measures**
  Master Key functionality adds basic access control (though not encrypted).

* **Cross-Platform Notes**
  Uses `system("cls")` and `system("color")` for console effects (Windows-specific). For portability, consider ANSI escape codes or libraries like `ncurses`.

* **Error Handling**
  Minimal error handling provided. Consider expanding validation checks for input integrity and transaction logic.

---

## 🚀 Future Improvements

* Password encryption for Master Key
* Enhanced input validation and exception handling
* GUI integration (e.g., with Qt)
* Account login system for customers
* Transaction history tracking

---
