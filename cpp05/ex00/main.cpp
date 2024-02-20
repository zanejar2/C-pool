#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat ban("Ban", 20);
        std::cout << ban << std::endl;
        ban.decrementer();
        std::cout << ban << std::endl;
        ban.incrementer();
        std::cout << ban << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;    
    }
}