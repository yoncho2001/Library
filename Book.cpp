#include "Book.h"
size_t Book::counter = 0;
Book::Book()
{
	this-> author;
    this-> name;
    this-> genre;
    this-> shortDes;
    this-> keywords;
    this-> year = 0;
    this-> id = counter++;
    this->rate = 0;
}

Book::Book(const Book& other)
{
    Book::setAutor(other.author);
    Book::setName(other.name);
    Book::setGenre(other.genre);
    Book::setShortDes(other.shortDes);
    Book::setKeywords(other.keywords);
    Book::setYear(other.year);
    Book::setRate(other.rate);
    this-> id = counter++;
}

Book& Book::operator=(const Book& other)
{
    if (this != &other)
    {
        Book::setAutor(other.author);
        Book::setName(other.name);
        Book::setGenre(other.genre);
        Book::setShortDes(other.shortDes);
        Book::setKeywords(other.keywords);
        Book::setYear(other.year);
        Book::setRate(other.rate);
        this-> id = counter++;
    }

    return *this;
}
Book::Book(const String author, const String name, const String genre, const String shortDes, const String keywords, size_t year, double rate)
{
    Book::setAutor(author);
    Book::setName(name);
    Book::setGenre(genre);
    Book::setShortDes(shortDes);
    Book::setKeywords(keywords);
    Book::setYear(year);
    Book::setRate(rate);
    this-> id = counter++;
}

void Book::setAutor(const String other)
{
    this->author = other;
}
String Book::getAuthor()const
{
    return this->author;
}

void Book::setName(const String other)
{
    this->name = other;
}
String Book::getName()const
{
    return this->name;
}

void Book::setGenre(const String other)
{
    this->genre = other;
}
String Book::getGenre()const
{
    return this->genre;
}

void Book::setShortDes(const String other)
{
    this->shortDes = other;
}
String Book::getShortDes()const
{
    return this->shortDes;
}

void Book::setKeywords(const String other)
{
    this->keywords = other;
}
String Book::getKeywords()const
{
    return this->keywords;
}

size_t Book::getID()const
{
    return this->id;
}

void Book::setYear(const size_t other)
{
    this->year = other;
}
size_t Book::getYear()const
{
    return this->year;
}

void Book::setRate(const double other)
{
    this->rate = other;
}
double Book::getRate()const
{
    return this->rate;
}

std::ostream& operator <<(std::ostream& out, const Book& book)
 {
    if(book.author.getSize()== 0)
    {
    out << " Default ";
    out << "/n";
    }
    else
    {
    out << " Book autor: ";
    out << book.author; 
    out << "\n";

    out << " Book name: ";
    out << book.name; 
    out << "\n";
     
    out << " Book genre: ";
    out << book.genre; 
    out << "\n";

    out << " Book ID: ";
    out << book.id; 
    out << "\n";
    }
    return out;
 }