#pragma once
#include "Book.h"
#include "User.h"
#include "Vector.h"


class Library
{
private:
    Vector<Book> books;
    Vector<User> users;
public:
    Library();
    Library(const Library& other);
    Library& operator=(const  Library& other);
    void addBook();
    void addUser();
    void allBooks();
    void printInfo(size_t number);

};
#include "Library.cpp"
