#include <iostream>

//#include "faker-cxx/Date.h"
#include "faker-cxx/Internet.h"
//#include "faker-cxx/Location.h"
//#include "faker-cxx/String.h"

int main()
{
    //const auto email = faker::Internet::email();
    //const auto password = faker::Internet::password();
    //const auto username = faker::Internet::username();

    //std::cout << email << std::endl;            // Lois_Hauck@hotmail.com
    //std::cout << password << std::endl;         // @cWLwgM#Knalxeb
    //std::cout << username << std::endl;
    const auto anonymousUsername = faker::Internet::anonymousUsername();
    std::cout << anonymousUsername << std::endl;

    const auto anonymousUsername2 = faker::Internet::anonymousUsername();
    std::cout << anonymousUsername2 << std::endl;
    return 0;
}