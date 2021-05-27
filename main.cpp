#include "Library.h"

int main()
{
    String author = "kiro";
    String name ("ko");
    String genre = "staa";
    String shortDes = "staa";
    String keywords = "kkkkkk";
    size_t year = 200;
    size_t rate = 50;

    String author2 = "pesho";
    String name2 = "ko5";
    String genre2 = " ne staa";
    String shortDes2 = "ne staa";
    String keywords2 = "gg";
    size_t year2 = 50;
    size_t rate2 = 60;
    Book as(author, name, genre, shortDes, keywords, year, rate);
    Library a ;
    a.addTestBook(author, name, genre, shortDes, keywords, year, rate);
    a.addTestBook(author2, name2, genre2, shortDes2, keywords2, year2, rate2);
    a.allBooks();

    
    std::cout<<"\n";
    String c = "author";
    String b = "desc";
    std::cout<<"llllllllllllllllllllllllll\n";
    a.sort(c,b);
    a.allBooks();
    std::cout<<"llllllllllllllllllllllllll\n";
   


}