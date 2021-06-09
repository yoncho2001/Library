#pragma once
#include "Run.h"

 Run::Run()
 {
    Library start ;
    User curentUser;
    bool isRuning = true; 
    bool isOpen = false;
    bool isAdmin = false;
    bool isLogin = false;
 }

 void Run::run()
    {
        std::cout<<"--------Welcome to the library.--------"<<std::endl;
        std::cout<<"If you do not know what to do write help."<<std::endl; 
        while (isRuning)
        {
            std::cout<<"Enter your comand: ";
            String comand;
            std::cin>>comand;
           

            if (comand == "help")
            {
                std::cout<<"Comand list: "<<std::endl;
                std::cout<<"help         - you can see these list again."<<std::endl;
                std::cout<<"open         - open the files(need to be first)."<<std::endl;
                std::cout<<"close        - close the file."<<std::endl;
                std::cout<<"save         - save the changes."<<std::endl;
                std::cout<<"saveAs       - save in diferent file."<<std::endl;
                std::cout<<"login        - you can login."<<std::endl;
                std::cout<<"-----For these comands you need to be login-----"<<std::endl;
                std::cout<<"logout       - you can logout."<<std::endl;
                std::cout<<"books all    - you can see short info for all books.."<<std::endl;
                std::cout<<"books find   - you can choose standard and print all books ho has it."<<std::endl;
                std::cout<<"books info   - you can print all info for a book with korekt ID"<<std::endl;
                std::cout<<"-----For these comands you need to be admin-----"<<std::endl;
                std::cout<<"books add    - you can add book"<<std::endl;
                std::cout<<"books remove - remove book by name"<<std::endl;
                std::cout<<"users add    - you can add user"<<std::endl;
                std::cout<<"users remove - remove user by name"<<std::endl;
                std::cout<<"exit         - end the program"<<std::endl;
            }

             else if (comand == "exit")
            {
                isRuning = false;
                start.save();
                std::cout<<"------------Have a nice day-------- "<<std::endl;
            }

             else if (comand != "open" && isOpen == false && comand != "exit")
            {
               std::cout<<"You need to open a file."<<std::endl;
            }

             else if (comand == "open")
            {
                start.open();
                std::cout<<"You open a file."<<std::endl;
                isOpen = true;
            }

             else if (comand == "close" && isOpen)
            {
                start.save();
                Library temp;
                start = temp;
                isOpen = false;

            }

             else if (comand == "save" && isOpen)
            {
                start.save();
                std::cout<<"You save the file."<<std::endl;
            }

             else if (comand == "saveAs" && isOpen)
            {
                String fBooks ;
                std::cout<<"Enter your path for books: ";
                std::cin>>fBooks;

                String fusers ;
                std::cout<<"Enter your path for books: ";
                std::cin>>fusers;
                
                start.saveAs(fBooks, fusers);
            }

             else if (comand == "login" && isOpen)
            {
              
                String str;
                std::cout<<"Please login:"<<std::endl;
                std::cout<<"Username: ";
                std::cin>>str;
                curentUser.setName(str.getData());
                
                std::cout<<"Password: ";
                std::cin>>str;
                curentUser.setPaswor(str.getData());

                Run::isLoged(curentUser);
            }

             else if (isLogin == false)
            {
                 std::cout<<"You need to login."<<std::endl;
            }
                       
             else if (comand == "logout" && isOpen && isLogin)
            {
                User curEmty;
                curentUser = curEmty;
                std::cout<<"You logout."<<std::endl;
                isLogin = false;
                isAdmin = false;
            }

             else if (comand == "books all" && isOpen && isLogin)
            {
                start.allBooks();
            }

             else if (comand == "books find" && isOpen && isLogin)
            {
                String str;
                std::cout<<"Enter way to find (title, author, tag): ";
                std::cin>>str;
                String  way= str;

                std::cout<<"Enter pointer : ";
                std::cin>>str;
                String wayName = str;
                start.findBook(way, wayName);
            }

             else if (comand == "books sort" && isOpen && isLogin)
            {
                String str;
                std::cout<<"Enter asc (ascending sort)/desc (descending sort): ";
                std::cin>>str;
                String ascDesc = str;

                std::cout<<"Enter way to sort (title, author, tag): ";
                std::cin>>str;
                String  way= str;

                start.sort(way, ascDesc);
            }

             else if (comand == "books info" && isOpen && isLogin)
            {
                size_t id;
                std::cin>>id;
                start.printInfo(id);
            }

            else if (isAdmin == false)
            {
                 std::cout<<"You need to be admin."<<std::endl;
            }

             else if (comand == "books add" && isOpen && isLogin && isAdmin)
            {
               start.addBook();
            }

             else if (comand == "users add" && isOpen && isLogin && isAdmin)
            {
                start.addUser();
            }

             else if (comand == "books remove" && isOpen && isLogin && isAdmin)
            {
                start.removeBook();
            }

             else if (comand == "users remove" && isOpen && isLogin && isAdmin)
            {
                start.removeUser();
            }

            else
            {
                std::cout<<"Wrong  comand try again (write help). "<<std::endl;
            }
        }
    }

void Run::isLoged(const User& curentUser )
{
    for (size_t i = 0; i < start.getUsers().getSize(); i++)
    {
        if (curentUser.getName() == start.getUsers()[i].getName())
        {
            if (curentUser.getPaswor() == start.getUsers()[i].getPaswor())
            {
                isAdmin = start.getUsers()[i].getAdmin();
                isLogin = true;
                std::cout<<"You are login. "<<std::endl;
                return;
            }
        }
    }
    std::cout<<"Wrong user or pass thy again. "<<std::endl;
} 
    

