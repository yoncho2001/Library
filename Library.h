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
    void removeBook();
    void removeUser();
    void allBooks();

    void addTestBook(const String& author, const String& name, const String& genre,const String& shortDes, const String& keywords, const size_t year, const size_t rate);
    void addTestUser(const String& user, const String& pasword, const bool admin);

    void printInfo(size_t number);
    void printAuthor( String& wayName);
    void printTitle( String& wayName);
    void printTag( size_t& wayName);
    
    void findBook( String& way,  String& wayName );

};
#include "Library.cpp"
