@echo off
cls
echo Compiling Library Management System...

g++ main.cpp book.cpp library.cpp -o library_system.exe

if %ERRORLEVEL% NEQ 0 (
    echo.
    echo 🔴 Compilation failed. Please fix the errors above.
) else (
    echo.
    echo ✅ Compilation successful. Running the program...
    echo -----------------------------------------------------
    library_system.exe
)

echo.
pause
