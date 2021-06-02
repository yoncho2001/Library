#pragma once
#include <iostream>
#include "String.h"

class Book
{
private:
    String author;
    String name;
    String genre;
    String shortDes;
    String keywords;
    size_t year;
    size_t id;
    static size_t counter;
    double rate;

public:
    Book();
    Book(const Book &other);
    Book &operator=(const Book &other);
    Book(const String author, const String name, const String genre, const String shortDes, const String keywords, size_t year, double rate);

    void setAutor(const String other);
    String getAuthor() const;

    void setName(const String other);
    String getName() const;

    void setGenre(const String other);
    String getGenre() const;

    void setShortDes(const String other);
    String getShortDes() const;

    void setKeywords(const String other);
    String getKeywords() const;

    void setYear(const size_t other);
    size_t getYear() const;

    void setID(const size_t other);
    size_t getID() const;

    void setRate(const double other);
    double getRate() const;

    void saveToFile(std::ostream &);

    friend std::ostream &operator<<(std::ostream &out, const Book &book);
};
#include "Book.cpp"
