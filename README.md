📘 Library Management System




🗂️ Description
This is a console-based Library Management System written in C++. It allows users to add, search, delete, and view books using a simple menu-driven interface. Book data is stored in a text file to ensure persistence between runs.

📌 Features
📚 Add new books (title, author, ISBN, year)

🔍 Search for books by title, author, or ISBN

❌ Delete books

📋 View all books

💾 Persistent data saved to library_data.txt

🧼 Clean, modular codebase (OOP + separation of concerns)

🏗️ Project Structure

  LibraryManagement/
  ├── main.cpp              # Entry point with menu interface
  ├── book.h / book.cpp     # Book class definition and implementation
  ├── library.h / library.cpp # Library class to manage books
  ├── utils.h               # Helper functions
  ├── library_data.txt      # Data storage file
  ├── run_library_system.bat# Windows run script
  └── README.md             # This file
  

📌 Main Menu

🚀 How to Run
🪟 On Windows (using .bat file)
### Double-click run_library_system.bat


📁 Sample Data File

library_data.txt


9780131103627,The C Programming Language,Brian W. Kernighan,1988
9780321751041,Effective C++,Scott Meyers,2005


✅ Requirements
C++11 or later

g++ compiler (or any C++ compiler)

🧠 Concepts Used
  
  Object-Oriented Programming (OOP)
  
  File I/O in C++
  
  Vectors and Strings
  
  Modular Design (header/source separation)

📄 License

This project is licensed under the MIT License.

🙌 Acknowledgements

Thanks to:

C++ STL for its robust container and file handling

Everyone who maintains open source libraries and compilers

