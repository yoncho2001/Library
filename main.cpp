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

    String user = "pesho";
    String pas = "555s5dsd5";
    bool admin= true;

    String user2 = "kiro";
    String pas2 = "555ddfeeesd5";
    bool admin2= false;
    
    Book as(author, name, genre, shortDes, keywords, year, rate);
    std::cout<<(name == name2)<<"\n";//string ==/copy

    

    Library a ;
  
    a.addTestBook(author, name, genre, shortDes, keywords, year, rate);
    a.addTestBook(author2, name2, genre2, shortDes2, keywords2, year2, rate2);
    a.addTestUser(user,pas,admin);
    a.addTestUser(user2,pas2,admin2);
    //a.addBook();
    //a.reverse();
    a.allBooks();
   
   a.saveToFileBook("Books.txt");
   a.saveToFileUser("Users.txt");

   
    std::cout<<"\n";
    String c = "ko";
    String b = "kiro";
    a.removeBook();
    a.allBooks();
    /*
    std::cout<<"------------------------------\n";
    a.sort(c,b);
    a.allBooks();
    std::cout<<"------------------------------\n";*/
   


}