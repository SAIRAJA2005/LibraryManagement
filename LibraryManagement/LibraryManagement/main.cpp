#include "library.h"
#include "utils.h"

int main() {
    Library lib;
    lib.loadFromFile("library_data.txt");

    int choice;
    std::string isbn;

    do {
        printLine();
        std::cout << "Library Management System\n";
        printLine();
        std::cout << "1. Add Book\n";
        std::cout << "2. Display All Books\n";
        std::cout << "3. Search Book by ISBN\n";
        std::cout << "4. Delete Book by ISBN\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1:
                lib.addBook();
                break;
            case 2:
                lib.displayBooks();
                break;
            case 3:
                std::cout << "Enter ISBN to search: ";
                std::cin >> isbn;
                lib.searchBook(isbn);
                break;
            case 4:
                std::cout << "Enter ISBN to delete: ";
                std::cin >> isbn;
                lib.deleteBook(isbn);
                break;
            case 5:
                lib.saveToFile("library_data.txt");
                std::cout << "Data saved. Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}