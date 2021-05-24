#include "Book.h"
Book::Book()
{
	this-> author;
    this-> name;
    this-> genre;
    this-> shortDes;
    this-> keywords;
    this-> year = 0;
    this-> number = 0;
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
    Book::setNumber(other.number);
    Book::setRate(other.rate);
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
        Book::setNumber(other.number);
        Book::setRate(other.rate);
    }

    return *this;
}
Book::Book(const String author, const String name, const String genre, const String shortDes, const String keywords, size_t year, size_t number,double rate)
{
    Book::setAutor(author);
    Book::setName(name);
    Book::setGenre(genre);
    Book::setShortDes(shortDes);
    Book::setKeywords(keywords);
    Book::setYear(year);
    Book::setNumber(number);
    Book::setRate(rate);
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

void Book::setYear(const size_t other)
{
    this->year = other;
}
size_t Book::getYear()const
{
    return this->year;
}

void Book::setNumber(const size_t other)
{
    this->number = other;
}
size_t Book::getNumber()const
{
    return this->number;
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
    out << " Default :";
    out << "/n";
    }
    else
    {
    out << " Book autor:";
    out << book.author; 
    out << "\n";

    out << " Book name:";
    out << book.name; 
    out << "\n";
     
    out << " Book genre:";
    out << book.genre; 
    out << "\n";

    out << " Book number:";
    out << book.number; 
    out << "\n";
    }
    return out;
 }