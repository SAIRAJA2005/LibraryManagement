#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include <vector>
#include <string>

class Library {
private:
    std::vector<Book> books;

public:
    void addBook();
    void displayBooks() const;
    void searchBook(const std::string& isbn) const;
    void deleteBook(const std::string& isbn);
    void loadFromFile(const std::string& filename);
    void saveToFile(const std::string& filename) const;
};

#endif