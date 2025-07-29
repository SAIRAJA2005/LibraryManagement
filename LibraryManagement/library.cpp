#include "library.h"
#include <iostream>
#include <fstream>
#include <sstream>

void Library::addBook() {
    Book b;
    b.input();
    books.push_back(b);
    std::cout << "Book added successfully!\n";
}

void Library::displayBooks() const {
    if (books.empty()) {
        std::cout << "No books available.\n";
        return;
    }

    for (const auto& b : books) {
        b.display();
    }
}

void Library::searchBook(const std::string& isbn) const {
    for (const auto& b : books) {
        if (b.getISBN() == isbn) {
            std::cout << "Book found:\n";
            b.display();
            return;
        }
    }
    std::cout << "Book not found.\n";
}

void Library::deleteBook(const std::string& isbn) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getISBN() == isbn) {
            books.erase(it);
            std::cout << "Book deleted successfully.\n";
            return;
        }
    }
    std::cout << "Book not found.\n";
}

void Library::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cout << "No existing data file found. Starting fresh.\n";
        return;
    }

    std::string line;
    while (getline(file, line)) {
        std::stringstream ss(line);
        std::string isbn, title, author, yearStr;
        getline(ss, isbn, ',');
        getline(ss, title, ',');
        getline(ss, author, ',');
        getline(ss, yearStr, ',');

        Book b(isbn, title, author, stoi(yearStr));
        books.push_back(b);
    }

    file.close();
    std::cout << "Data loaded from file.\n";
}

void Library::saveToFile(const std::string& filename) const {
    std::ofstream file(filename);
    for (const auto& b : books) {
        file << b.toString() << "\n";
    }
    file.close();
}