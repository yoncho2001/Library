#include "Library.h"
#include <cstring>
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

    String author;
    std::cout<<"Enter author (you have 100 simvols): ";
    std::cin>> author;

    String name;
    std::cout<<"Enter name (you have 100 simvols): ";
    std::cin>> name;
        
    String genre; 
    std::cout<<"Enter genre (you have 100 simvols): ";
    std::cin>> genre;

    String shortDes;
    std::cout<<"Enter shortDes (you have 100 simvols): ";
    std::cin>> shortDes;

    String keywords;
    std::cout<<"Enter keywords (you have 100 simvols): ";
    std::cin>> keywords;    
    std::cin.ignore();

    size_t year;
    std::cout<<"Enter year: ";
    std::cin>> year;

    double rate;
    std::cout<<"Enter rate: ";
    std::cin>> rate;
    Book newBook (author, name,genre,shortDes,keywords,year,rate);
    this->books.pushBack(newBook);
}
void Library::addUser()
{
   
    String user;
    std::cout<<"Enter user (you have 100 simvols): ";
    std::cin>> user;  

    String pasword;
    std::cout<<"Enter pasword (you have 100 simvols): ";
    std::cin>> pasword;  
    std::cin.ignore();

    bool admin;
    std::cout<<"Are you admin: ";
    std::cin>> admin;

    User newUser (user,pasword,admin);
    this->users.pushBack(newUser);
}

void Library::removeBook()
{
    bool flag = false;
    
    String temp;
    std::cout<<"Enter book name (you have 100 simvols): ";
    std::cin>> temp;

    for (size_t i = 0; i < this->books.getSize(); i++)
    {
        std::cout <<temp <<"/"<<this->books[i].getName()<<std::endl;
        if(this->books[i].getName() == temp)
        {
            std::cout <<this->books[i].getName()<<std::endl;
            this->books.popByIndex(i);
            flag = true;
        }
    }
    if (flag == false)
    {
         std::cout<<"The book dont exist. "<<std::endl;
    }
}
    
void Library::removeUser()
{
    bool flag = false;
    std::cin.ignore();
    String temp;
    std::cout<<"Enter user name (you have 100 simvols): ";
    std::cin>> temp;
    for (size_t i = 0; i < this->users.getSize(); i++)
    {
        if(this->users[i].getName() == temp)
        {
            this->users.popByIndex(i);
        }
    }
    if (flag == false)
    {
         std::cout<<"The user dont exist. ";
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
      std::cout <<" ---END--- "<< std::endl;
    }
}

void Library::addTestBook(const String& author, const String& name, const String& genre,const String& shortDes, const String& keywords, const size_t year, const size_t rate)
{
    Book newBook (author, name,genre,shortDes,keywords,year,rate);
    this->books.pushBack(newBook);
}

void Library::addTestUser(const String& user, const String& pasword, const bool admin )
{
    User newUser (user,pasword,admin);
    this->users.pushBack(newUser);
}

void Library::printAuthor( String& wayName)
{
    bool flag = false;
    for (size_t i = 0; i < this->books.getSize(); i++)
    {
        if(this->books[i].getAuthor() == wayName)
        {
            flag = true;
            std::cout << this->books[i];
	    	std::cout << std::endl;
            
        }
    }
    if(flag == false)
    {
        std::cout<<"cant find anything ";
        std::cout << "\n";
    }
}

void  Library::printTitle( String& wayName)
{
    bool flag = false;
    for (size_t i = 0; i < this->books.getSize(); i++)
    {
        if(this->books[i].getName()== wayName)
        {
            flag = true;
            std::cout << this->books[i];
	    	std::cout << std::endl;
            
        }
    }
    if(flag == false)
    {
        std::cout<<"cant find anything ";
        std::cout << "\n";
    }
}

void  Library::printTag( size_t& wayName)
{
    bool flag = false;
    for (size_t i = 0; i < this->books.getSize(); i++)
    {
        if(this->books[i].getID()== wayName)
        {
            flag = true;
            std::cout << this->books[i];
	    	std::cout << std::endl;
        }
    }
    if(flag == false)
    {
        std::cout<<"cant find anything ";
        std::cout << "\n";
    }
}

void  Library::printInfo( size_t number)
{
    bool flag = false;
    for (size_t i = 0; i < this->books.getSize(); i++)
    {
        if(this->books[i].getID()== number)
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

             std::cout << "ID:";
             std::cout << books[i].getID(); 
             std::cout << "\n";

             std::cout << "Rate:" ;
             std::cout<<books[i].getRate();
             std::cout << "\n";
             std::cout << "---END---";
            }
        }
    }
    if(flag == false)
    {
        std::cout<<"This book dont exist. ";
        std::cout << "\n";
    }
}

void Library::findBook( String& way, String& wayName )
{
    String author = "author";
    String title = "title";
    String tag = "tag";
    if (way == author)
    {
       Library::printAuthor(wayName);
    }
    if (way == title)
    {
        Library::printTitle(wayName);
    }

   // if (way == tag)
   // {
   //     Library::printTag(wayName);
   // }
    
}

void Library::sort( String& way, String& ascDesc)
{
    String author = "author";
    String title = "title";
    String year = "year";
    String rating = "rating";
    String desc = "desc";

    if (way == author)
    {
       Library::sortByAuthor();
    }
    if (way == title)
    {
        Library::sortByTitle();
    }
    if (way == year)
    {
        Library::sortByYear();
    }
    if (way == rating)
    {
        Library::sortByRating();
    }
    if (desc == ascDesc)
    {
        Library::reverse();
    }
   
}

 void Library::sortByAuthor()
 {
     for (int i = 0; i < this->books.getSize() - 1; i++)
	{
		for (int j = i + 1; j < this->books.getSize(); j++)
		{
			if (this->books[i].getAuthor() > this->books[j].getAuthor())
			{
				std::swap(this->books[i],this->books[j]);
			}
		}
	}
 }

 void Library::sortByTitle()
 {
     for (int i = 0; i < this->books.getSize() - 1; i++)
	{
		for (int j = i + 1; j < this->books.getSize(); j++)
		{
			if (this->books[i].getName() > this->books[j].getName())
			{
				std::swap(this->books[i],this->books[j]);
			}
		}
	}
 }

 void Library::sortByYear()
 {
     for (int i = 0; i < this->books.getSize() - 1; i++)
	{
		for (int j = i + 1; j < this->books.getSize(); j++)
		{
			if (this->books[i].getYear() > this->books[j].getYear())
			{
				std::swap(this->books[i],this->books[j]);
			}
		}
	}
 }

 void Library::sortByRating()
 {
     for (int i = 0; i < this->books.getSize() - 1; i++)
	{
		for (int j = i + 1; j < this->books.getSize(); j++)
		{
			if (this->books[i].getRate() > this->books[j].getRate())
			{
				std::swap(this->books[i],this->books[j]);
			}
		}
	}
 }

 void Library::reverse()
{
    for (int i = 0; i < this->books.getSize() / 2; i++)
    {
        std::swap(this->books[i], this->books[this->books.getSize() - i - 1]);
    }
}

void Library::saveToFileBook(std::ostream& out)
 {
     out <<this->books.getSize()<< "\n";
    for (size_t i = 0; i < this->books.getSize(); i++)
    {
        this->books[i].saveToFile(out);
        out << "\n";
    }
 }

 void Library::saveToFileUser(std::ostream& out)
 {
    out <<this->users.getSize()<< "\n";
    for (size_t i = 0; i < this->users.getSize(); i++)
    {
        this->users[i].saveToFile(out);
        out << "\n";
    }
    
 }

 void Library::loadFromFileBook(std::istream& in)
 {
    char* charSize = new char[3];
    in.getline (charSize , 3);
    size_t size = atoi(charSize);

    char* stream = new char[124];

    for (size_t i = 0; i < size; i++)
    {
        Book tempBook;
        in.getline (stream,124,'|');
        tempBook.setAutor(stream);

        in.getline (stream,124,'|');
        tempBook.setName(stream);

        in.getline (stream,124,'|');
        tempBook.setGenre(stream);

        in.getline (stream,124,'|');
        tempBook.setShortDes(stream);

        in.getline (stream,124,'|');
        tempBook.setKeywords(stream);

        in.getline (stream,124,'|');
        tempBook.setYear(atoi(stream));

        in.getline (stream,124,'|');
        tempBook.setID(atoi(stream));

        in.getline (stream,124);
        tempBook.setRate(atof(stream));

        this->books.pushBack(tempBook);
    }
    delete[] charSize;
    delete[] stream;
 }

 void Library::loadFromFileUser(std::istream& in)
 {
    char* charSize = new char[3];
    in.getline (charSize , 3);
    size_t size = atoi(charSize);

    char* stream = new char[124];

    for (size_t i = 0; i < size; i++)
    {
        User tempUser;
        in.getline (stream,124,'|');
        tempUser.setName(stream);

        in.getline (stream,124,'|');
        tempUser.setPaswor(stream);

        in.getline (stream,124);
        tempUser.setAdmin(atoi(stream));

        this->users.pushBack(tempUser);
    }
    delete[] charSize;
    delete[] stream;
 }