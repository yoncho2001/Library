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
    size_t size;
    std::cout<<"Enter size of the autor:";
    std::cin>> size;
    String author(size +1);
    std::cout<<"Enter autor:";
    std::cin>>author;

    std::cout<<"Enter size of the name:";
    std::cin>> size;
    String name(size +1);
    std::cout<<"Enter name:";
    std::cin>>name;
    
    std::cout<<"Enter size of the genre:";
    std::cin>> size;
    String genre(size +1);
    std::cout<<"Enter genre:";
    std::cin>>genre;
    
    std::cout<<"Enter size of the shortDes:";
    std::cin>> size;
    String shortDes(size +1);
    std::cout<<"Enter shortDes:";
    std::cin>>shortDes;
    
    std::cout<<"Enter size of the keywords:";
    std::cin>> size;
    String keywords(size +1);
    std::cout<<"Enter keywords:";
    std::cin>>keywords;

    size_t year;
    std::cout<<"Enter year:";
    std::cin>> year;

    size_t number;
    std::cout<<"Enter number:";
    std::cin>> number;

    double rate;
    std::cout<<"Enter rate:";
    std::cin>> rate;
    Book newBook (author, name,genre,shortDes,keywords,year,number,rate);
    this->books.pushBack(newBook);
}
void Library::addUser()
{
    size_t size;
    std::cout<<"Enter size of the user";
    std::cin>> size;
    String user(size +1);
    std::cout<<"Enter user:";
    std::cin>>user;

    std::cout<<"Enter size of the pasword";
    std::cin>> size;
    String pasword(size +1);
    std::cout<<"Enter pasword:";
    std::cin>>pasword;

    bool admin;
    std::cout<<"Are you admin:";
    std::cin>> admin;
    User newUser (user,pasword,admin);
    this->users.pushBack(newUser);
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
      bool flag = false;
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
    if(flag)
    {
        std::cout<<"This book dont exist. ";
        std::cout << "\n";
    }
}