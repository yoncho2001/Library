#include "Library.h"

int main()
{
    String author = "kiro";
    std::cout<<author;
    String name = "ko praim";
    String genre = "staa";
    String shortDes = "staa";
    String keywords = "kkkkkk";
    size_t year = 2152;
    size_t rate = 5;

    String author2 = "pesho";
    std::cout<<author2;
    String name2 = "ko ne praim";
    String genre2 = " ne staa";
    String shortDes2 = "ne staa";
    String keywords2 = "gg";
    size_t year2 = 52;
    size_t rate2 = 6;

    Library a ;
    a.addTestBook(author, name, genre, shortDes, keywords, year, rate);
    a.addTestBook(author2, name2, genre2, shortDes2, keywords2, year2, rate2);
    a.allBooks();
    std::cout<<"lllllllllllllllllllllllll\n";
    a.printInfo(9);
    std::cout<<"llllllllllllllllllllllllll\n";
    a.printInfo(11);
    std::cout<<"llllllllllllllllllllllllll\n";
    a.removeBook();
    a.allBooks();
    

    std::cout<<"\n";
   // String c = "author";
  //  String b = "kiro";
    //a.findBook(c, b); 
    
}