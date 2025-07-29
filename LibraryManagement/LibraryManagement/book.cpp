#include "book.h"
#include <iostream>

Book::Book() {}

Book::Book(std::string isbn, std::string title, std::string author, int year)
    : isbn(isbn), title(title), author(author), year(year) {}

void Book::input() {
    std::cout << "Enter ISBN: ";
    std::cin >> isbn;
    std::cin.ignore();
    std::cout << "Enter Title: ";
    getline(std::cin, title);
    std::cout << "Enter Author: ";
    getline(std::cin, author);
    std::cout << "Enter Year: ";
    std::cin >> year;
}

void Book::display() const {
    std::cout << "ISBN: " << isbn << ", Title: " << title
              << ", Author: " << author << ", Year: " << year << "\n";
}

std::string Book::getISBN() const {
    return isbn;
}

std::string Book::toString() const {
    return isbn + "," + title + "," + author + "," + std::to_string(year);
}