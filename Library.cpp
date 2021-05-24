#include "Library.h"
Library::Library()
{
	this->books;
    this->users;
}

Library::Library(const Library& other)
{
    this->books = other.books ;
    this->users = other.users ;
}

Library& Library::operator=(const Library& other)
{
    if (this != &other)
    {
        this->books = other.books ;
        this->users = other.users ;
    }

    return *this;
}
void Library::addBook()
{
    String author(500);
    std::cout<<"Enter author (you have 500 simvols): ";
    std::cin>> author;

    String name(500);
    std::cout<<"Enter name (you have 500 simvols): ";
    std::cin>> name;
        
    String genre(500); 
    std::cout<<"Enter genre (you have 500 simvols): ";
    std::cin>> genre;

    String shortDes(500);
    std::cout<<"Enter shortDes (you have 500 simvols): ";
    std::cin>> shortDes;

    String keywords(500);
    std::cout<<"Enter keywords (you have 500 simvols): ";
    std::cin>> keywords;    

    size_t year;
    std::cout<<"Enter year: ";
    std::cin>> year;

    size_t number;
    std::cout<<"Enter number: ";
    std::cin>> number;

    double rate;
    std::cout<<"Enter rate: ";
    std::cin>> rate;
    Book newBook (author, name,genre,shortDes,keywords,year,number,rate);
    this->books.pushBack(newBook);
}
void Library::addUser()
{
    String user(500);
    std::cout<<"Enter user (you have 500 simvols): ";
    std::cin>> user;  

    String pasword(500);
    std::cout<<"Enter pasword (you have 500 simvols): ";
    std::cin>> pasword;  

    bool admin;
    std::cout<<"Are you admin: ";
    std::cin>> admin;
    User newUser (user,pasword,admin);
    this->users.pushBack(newUser);
}

void Library::removeBook()
{
    String temp(500);
    std::cout<<"Enter book name (you have 500 simvols): ";
    std::cin>> temp;
    for (size_t i = 0; i < this->books.getSize(); i++)
    {
        if(this->books[i].getName() == temp)
        {
            this->books.popByIndex(i);
        }
        else
        {
             std::cout<<"The book dont exist. ";
        }
    }
}
    
void Library::removeUser()
{
    String temp(500);
    std::cout<<"Enter user name (you have 500 simvols): ";
    std::cin>> temp;
    for (size_t i = 0; i < this->users.getSize(); i++)
    {
        if(this->users[i].getName() == temp)
        {
            this->users.popByIndex(i);
        }
        else
        {
             std::cout<<"The user dont exist. ";
        }
    }
}

void  Library::allBooks()
{
    std::cout << " Books:";
       if(this->books.isEmpty())
    {
        std::cout << " No books.";
        std::cout << std::endl;
    }
    else
    {
     std::cout << std::endl;
      for (int i = 0; i < this->books.getSize(); ++i) {
	    	std::cout << this->books[i];
	    	std::cout << std::endl;
	    }
    }
}
void  Library::printInfo( size_t number)
{
    bool flag = false;
    for (size_t i = 0; i < this->books.getSize(); i++)
    {
        if(this->books[i].getNumber()== number)
        {
            flag = true;
            if(books[i].getAuthor().getSize()== 0)
            {
                std::cout << " Default :";
                std::cout << "/n";
            }
            else
           {
             std::cout << "Autor:";
             std::cout << books[i].getAuthor(); 
             std::cout << "\n";

             std::cout << "Name:";
             std::cout << books[i].getName(); 
             std::cout << "\n";
           
             std::cout << "Genre:";
             std::cout << books[i].getGenre(); 
             std::cout << "\n";
          
             std::cout << "ShortDes:";
             std::cout << books[i].getShortDes(); 
             std::cout << "\n";

             std::cout << "Keywords:";
             std::cout << books[i].getKeywords(); 
             std::cout << "\n";

             std::cout << "Year:";
             std::cout << books[i].getYear(); 
             std::cout << "\n";

             std::cout << "Number:";
             std::cout << books[i].getNumber(); 
             std::cout << "\n";

             std::cout << "Rate:" ;
             std::cout<<books[i].getRate();
             std::cout << "\n";
            }
        }
    }
    if(flag == false)
    {
        std::cout<<"This book dont exist. ";
        std::cout << "\n";
    }
}