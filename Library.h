#pragma once
#include <fstream>
#include "Book.h"
#include "User.h"
#include "Vector.h"


class Library
{
private:
    Vector<Book> books;
    Vector<User> users;
    String filepathBooks;
    String filepathUsers;
public:
    Library();
    Library(const Library& other);
    Library& operator=(const  Library& other);

    const Vector<User>& getUsers()const;
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
    void printTag( String& wayName);
    
    void findBook( String& way,  String& wayName );

    void sort(String& way, String& ascDesc);
    void sortByAuthor();
    void sortByTitle();
    void sortByYear();
    void sortByRating();
    void reverse();

    void saveToFileBook(std::ostream& out);
    void saveToFileUser(std::ostream& out);
    void loadFromFileBook(std::istream& in);
    void loadFromFileUser(std::istream& in);

    void open();
    void save();

};
#include "Library.cpp"
