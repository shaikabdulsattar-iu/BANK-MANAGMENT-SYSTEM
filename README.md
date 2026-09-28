# 🏦 BANK MANAGEMENT SYSTEM

A **C++ Object-Oriented Programming (OOP) based Bank Management System** developed as an academic Cornerstone/PBL project at **Aditya University**.

The project demonstrates core C++ programming and OOP concepts through a practical banking application. It provides functionality for customer management, account creation, deposits, withdrawals, fund transfers, balance enquiry, interest calculation, account search, and transaction recording.

---

# 📌 PROJECT INFORMATION

**Project Title:** Bank Management System

**Project Type:** OOP / PBL / Cornerstone Project

**Programming Language:** C++

**University:** Aditya University, Surampalem

**Department:** Artificial Intelligence & Machine Learning (AIML)

**Academic Year:** 2026–2027

### Project Guide

**Dr. K. Lakshmi Karthika Kantham**
Assistant Professor
Department of AIML
Aditya University

---

# 👥 TEAM MEMBERS

| Name                   | Roll Number    | Role / Responsibility                         |
| ---------------------- | -------------- | --------------------------------------------- |
| **Shaik Abdul Sattar** | **25B11AIA91** | **Team Leader & System Designer / Developer** |
| **K Naveen Kumar**     | **25B11AI611** | Core Developer                                |
| **Shaik Abdul Rajak**  | **25B11AIA90** | Developer & Tester                            |
| **MD Shariq Zama**     | **25B11AI753** | Documentation & UI                            |

---

# 🎯 PROJECT OBJECTIVE

The main objective of the Bank Management System is to develop a simple, structured, and user-friendly banking application using **C++ and Object-Oriented Programming concepts**.

The system is designed to:

* Manage customer information.
* Create and manage bank accounts.
* Support Savings and Current Accounts.
* Perform deposits.
* Perform withdrawals.
* Transfer money between accounts.
* Display account information.
* Search for accounts.
* Calculate interest for savings accounts.
* Maintain transaction records.
* Validate banking operations.
* Handle invalid inputs and exceptions.
* Demonstrate practical applications of C++ OOP concepts.

---

# ✨ FEATURES

## 👤 Customer Management

The system manages:

* Customer ID
* Customer Name
* Phone Number
* Address

---

## 🏦 Account Management

The system supports:

### Savings Account

* Account Number
* Customer Details
* Initial Balance
* Interest Rate
* Interest Calculation

### Current Account

* Account Number
* Customer Details
* Balance
* Overdraft Limit

---

## 💰 Banking Operations

The application provides:

* Account creation
* Account search
* Account display
* Deposit money
* Withdraw money
* Transfer money
* Balance enquiry
* Interest calculation
* Total account count

---

## 🔐 Validation and Exception Handling

The system handles:

* Invalid account numbers
* Invalid deposit amounts
* Invalid withdrawal amounts
* Negative balances
* Insufficient balance
* Invalid menu choices
* Invalid transfer accounts

C++ exception handling is used to provide appropriate error messages.

---

# 🧠 OOP CONCEPTS USED

The project demonstrates major concepts from **C++ Object-Oriented Programming**.

| OOP Concept              | Application in Project                                  |
| ------------------------ | ------------------------------------------------------- |
| **Class**                | Customer, Account, Bank, SavingsAccount, CurrentAccount |
| **Object**               | Customer and Account objects                            |
| **Encapsulation**        | Private customer and account data                       |
| **Abstraction**          | Abstract Account class                                  |
| **Inheritance**          | SavingsAccount and CurrentAccount inherit Account       |
| **Polymorphism**         | Account pointers refer to different account types       |
| **Function Overloading** | Multiple `deposit()` functions                          |
| **Function Overriding**  | `calculateInterest()` and `displayAccount()`            |
| **Virtual Function**     | Runtime polymorphism                                    |
| **Constructor**          | Initializes objects                                     |
| **Destructor**           | Releases dynamically allocated objects                  |
| **Static Member**        | Counts total accounts                                   |
| **Exception Handling**   | Handles invalid banking operations                      |
| **Pointers**             | Account pointers                                        |
| **Dynamic Memory**       | `new` and `delete`                                      |
| **STL Vector**           | Stores account objects/pointers                         |
| **File Handling**        | Stores transaction records                              |

---

# 🏗️ SYSTEM ARCHITECTURE

```text
                    BANK MANAGEMENT SYSTEM
                              |
              +---------------+---------------+
              |               |               |
          Customer         Account          Bank
                              |
                 +------------+------------+
                 |                         |
          Savings Account           Current Account
                 |                         |
                 +------------+------------+
                              |
                     Banking Operations
                              |
       +----------+-----------+-----------+----------+
       |          |           |           |          |
    Deposit   Withdrawal   Transfer    Balance   Interest
                              |
                      Transaction Records
```

---

# 🔄 PROJECT MODULES

## 1. Customer Management Module

Responsible for maintaining customer information.

### Data:

```text
Customer ID
Customer Name
Phone Number
Address
```

---

## 2. Account Management Module

Responsible for creating and managing bank accounts.

Supported account types:

```text
Savings Account
Current Account
```

---

## 3. Deposit Module

Allows users to add money to an account.

Example:

```text
Initial Balance : ₹5000
Deposit         : ₹2000
-----------------------
New Balance     : ₹7000
```

---

## 4. Withdrawal Module

Allows users to withdraw money after checking the available balance.

Example:

```text
Balance      : ₹7000
Withdrawal   : ₹2000
---------------------
Remaining    : ₹5000
```

---

## 5. Fund Transfer Module

Transfers money from one account to another.

```text
Sender Account
      |
      | Amount
      ↓
Bank Management System
      |
      ↓
Receiver Account
```

The sender's balance is decreased and the receiver's balance is increased.

---

## 6. Balance Enquiry Module

Displays:

```text
Account Number
Customer Name
Current Balance
Account Type
```

---

## 7. Interest Calculation Module

Savings account interest is calculated using:

```text
Interest = Balance × Interest Rate / 100
```

The `calculateInterest()` function demonstrates **polymorphism**.

---

## 8. Transaction Module

Transactions such as:

```text
Deposit
Withdrawal
Transfer
```

are recorded and can be stored using file handling.

---

# 🖥️ MAIN MENU

The application provides a menu-driven interface:

```text
==========================================
       BANK MANAGEMENT SYSTEM
==========================================

1. Create Savings Account
2. Create Current Account
3. Display All Accounts
4. Deposit Money
5. Withdraw Money
6. Transfer Money
7. Calculate Interest
8. Search Account
9. Total Accounts
10. Exit

Enter your choice:
```

---

# 📂 PROJECT STRUCTURE

```text
Bank-Management-System/
│
├── README.md
│
├── src/
│   └── BankManagementSystem.cpp
│
├── docs/
│   ├── Bank_Management_System_Documentation.docx
│   └── Bank_Management_System_Presentation.pptx
│
├── screenshots/
│   ├── main-menu.png
│   ├── account-creation.png
│   ├── account-details.png
│   ├── deposit.png
│   ├── withdrawal.png
│   ├── transfer.png
│   ├── balance-enquiry.png
│   └── transaction-history.png
│
├── data/
│   └── transactions.txt
│
└── LICENSE
```

---

# ⚙️ TECHNOLOGIES USED

* **C++**
* **Object-Oriented Programming**
* **STL**
* **Vector**
* **File Handling**
* **Exception Handling**
* **Pointers**
* **Dynamic Memory Allocation**

---

# ▶️ HOW TO RUN THE PROJECT

## Step 1: Install a C++ Compiler

You can use:

* Code::Blocks
* Dev-C++
* Visual Studio
* VS Code with a C++ compiler
* Online C++ Compiler

---

## Step 2: Clone the Repository

```bash
git clone https://github.com/YOUR-USERNAME/Bank-Management-System.git
```

Replace `YOUR-USERNAME` with your GitHub username.

---

## Step 3: Open the Project

Open:

```text
src/BankManagementSystem.cpp
```

---

## Step 4: Compile

Using `g++`:

```bash
g++ src/BankManagementSystem.cpp -o BankManagementSystem
```

---

## Step 5: Run

### Windows

```bash
BankManagementSystem.exe
```

### Linux / macOS

```bash
./BankManagementSystem
```

---

# 🧪 SAMPLE OPERATIONS

## Account Creation

```text
Enter Customer ID: 101
Enter Customer Name: Rahul
Enter Phone Number: 9876543210
Enter Address: Vijayawada
Enter Account Number: 1001
Enter Initial Balance: 5000
Enter Interest Rate (%): 5

Account created successfully!
```

---

## Deposit

```text
Enter Account Number: 1001
Enter Deposit Amount: 2000

Deposit successful!
New Balance: Rs. 7000
```

---

## Withdrawal

```text
Enter Account Number: 1001
Enter Withdrawal Amount: 1000

Withdrawal successful!
Remaining Balance: Rs. 6000
```

---

## Fund Transfer

```text
Enter Sender Account: 1001
Enter Receiver Account: 1002
Enter Amount: 500

Transfer successful!
```

---

## Interest Calculation

```text
Enter Account Number: 1001

Savings Account Interest: Rs. 350
```

---

# 🛡️ EXCEPTION HANDLING

The project uses C++ exception handling to handle errors safely.

Example:

```cpp
try
{
    account->withdraw(amount);
}
catch (const exception& e)
{
    cout << "ERROR: " << e.what();
}
```

Examples of handled errors:

```text
Invalid deposit amount
Invalid withdrawal amount
Insufficient balance
Account not found
Invalid account number
```

---

# 💾 FILE HANDLING

The project uses C++ file handling to store transaction records.

Example:

```cpp
ofstream file("transactions.txt", ios::app);

if (file.is_open())
{
    file << transaction << endl;
    file.close();
}
```

Transaction records can contain:

```text
Deposit
Withdrawal
Transfer
Account Number
Amount
```

---

# 📊 EXPECTED OUTCOMES

After completing the project, the system should be able to:

* Create customer accounts.
* Create Savings Accounts.
* Create Current Accounts.
* Store account information.
* Deposit money.
* Withdraw money.
* Transfer money.
* Search accounts.
* Display account details.
* Calculate interest.
* Validate transactions.
* Handle exceptions.
* Record transactions.
* Demonstrate C++ OOP concepts.

---

# 🧪 TEST CASES

| Test Case      | Input                  | Expected Result            |
| -------------- | ---------------------- | -------------------------- |
| Create Account | Valid customer details | Account created            |
| Deposit        | ₹2000                  | Balance increases          |
| Withdrawal     | Valid amount           | Balance decreases          |
| Withdrawal     | Amount > balance       | Insufficient balance error |
| Transfer       | Valid sender/receiver  | Transfer successful        |
| Search         | Valid account number   | Account displayed          |
| Search         | Invalid account number | Account not found          |
| Deposit        | Negative amount        | Invalid amount error       |
| Interest       | Savings account        | Interest calculated        |
| Menu           | Invalid choice         | Error message              |

---

# 🚀 FUTURE SCOPE

The current Bank Management System can be extended with:

* Database integration using MySQL or SQLite.
* Secure customer login.
* PIN and password management.
* Role-based access.
* Customer and administrator dashboards.
* ATM functionality.
* Online banking.
* Mobile banking application.
* Web-based banking interface.
* Account statements.
* Loan management.
* Fixed deposit management.
* Transaction notifications.
* Email/SMS alerts.
* Enhanced security.
* Audit logging.

---

# 🎓 ACADEMIC PURPOSE

This project was developed as a **C++ Object-Oriented Programming project** to demonstrate how theoretical programming concepts can be applied to a practical real-world problem.

The project connects the following concepts:

```text
C++ Programming
       ↓
Classes & Objects
       ↓
Encapsulation
       ↓
Inheritance
       ↓
Abstraction
       ↓
Polymorphism
       ↓
Constructors & Destructors
       ↓
Function Overloading & Overriding
       ↓
Exception Handling
       ↓
STL & File Handling
       ↓
BANK MANAGEMENT SYSTEM
```

---

# 👨‍💻 TEAM RESPONSIBILITIES

## 🔹 Shaik Abdul Sattar

**Roll No:** 25B11AIA91

**Role:** Team Leader & System Designer / Developer

Responsibilities:

* Team coordination
* Project planning
* Requirement analysis
* System architecture
* Core C++ OOP implementation
* Module integration
* GitHub repository management
* Final testing
* Project presentation

---

## 🔹 K Naveen Kumar

**Roll No:** 25B11AI611

**Role:** Core Developer

Responsibilities:

* Customer management
* Account creation
* Deposit module
* Withdrawal module
* C++ class implementation
* Module testing

---

## 🔹 Shaik Abdul Rajak

**Roll No:** 25B11AIA90

**Role:** Developer & Tester

Responsibilities:

* Fund transfer module
* Account validation
* Exception handling
* Transaction functionality
* Debugging
* Testing

---

## 🔹 MD Shariq Zama

**Roll No:** 25B11AI753

**Role:** Documentation & UI

Responsibilities:

* Menu/interface design
* Output preparation
* Documentation
* README preparation
* PPT preparation
* Presentation support

---

# 👩‍🏫 PROJECT GUIDE

**Dr. K. Lakshmi Karthika Kantham**

**Assistant Professor**

**Department of AIML**

**Aditya University**

---

# ⭐ PROJECT SUMMARY

**Bank Management System** is a C++ OOP-based academic project that demonstrates the implementation of banking operations using classes, objects, inheritance, encapsulation, abstraction, polymorphism, exception handling, STL, pointers, dynamic memory, and file handling.

### Developed by

**Shaik Abdul Sattar | K Naveen Kumar | Shaik Abdul Rajak | MD Shariq Zama**

### Institution

**Aditya University, Surampalem**

### Academic Year

**2026–2027**
