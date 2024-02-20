#include "Intern.hpp"

int main()
{
    try {
        Intern fizig;
        AForm* formo;
        formo = fizig.makeForm("shrubbery creation", "mola");
        formo = fizig.makeForm("robotomy request", "zola");
        formo = fizig.makeForm("presidential pardon", "kola");
        formo = fizig.makeForm("something", "bola");

    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;    
    }
}