#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string isbn;
    std::string title;
    std::string author;
    int year;

public:
    Book();
    Book(std::string isbn, std::string title, std::string author, int year);
    
    void display() const;
    std::string getISBN() const;
    std::string toString() const;

    void input();
};

#endif