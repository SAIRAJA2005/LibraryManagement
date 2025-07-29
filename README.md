# 📘 Library Management System

## 🗂️ Description
This is a **console-based Library Management System** written in C++. It allows users to add, search, delete, and view books using a simple menu-driven interface. Book data is stored in a text file to ensure persistence between runs.

---

## 📌 Features

- 📚 Add new books (Title, Author, ISBN, Year)
- 🔍 Search for books by **Title**, **Author**, or **ISBN**
- ❌ Delete books
- 📋 View all books
- 💾 Persistent data saved to `library_data.txt`
- 🧼 Clean, modular codebase using **OOP** and **separation of concerns**

---

## 🏗️ Project Structure

LibraryManagement/

├── main.cpp # Entry point with menu interface

├── book.h # Book class header

├── book.cpp # Book class implementation

├── library.h # Library class header

├── library.cpp # Library class implementation

├── utils.h # Helper functions

├── library_data.txt # Data storage file

├── run_library_system.bat # Windows run script

└── README.md # Project documentation



---

## 📌 Main Menu

======== Library Management System ========

Add Book

Search Book

Delete Book

View All Books

Exit

===========================================



---

## 🚀 How to Run

### 🪟 On Windows (using `.bat` file)

1. Double-click `run_library_system.bat`

**OR**

2. Open Command Prompt in the project directory and run:
   ```bash
   g++ main.cpp book.cpp library.cpp -o library.exe
   library.exe



### 📁 Sample Data File

library_data.txt

9780131103627,The C Programming Language,Brian W. Kernighan,1988
9780321751041,Effective C++,Scott Meyers,2005



### ✅ Requirements
      C++11 or later
      
      g++ compiler (or any C++ compiler)


### 🧠 Concepts Used

    Object-Oriented Programming (OOP)
    
    File I/O in C++
    
    Vectors and Strings
    
    Modular Design (header/source separation)


🙌 Acknowledgements

  Thanks to:
    
    C++ STL for its robust container and file handling
    
    Everyone who maintains open source libraries and compilers
