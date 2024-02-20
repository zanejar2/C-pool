#include "Form.hpp"

int main()
{
    try {
        Bureaucrat ban ("zack", 20);
        std::cout << ban << std::endl;
        Form one("Sera", 37, 13);
        std::cout << one << std::endl;
        ban.signForm(one);
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;    
    }
}