#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try {
        Bureaucrat ban ("zack", 5);
        ShrubberyCreationForm luk("S17");
        RobotomyRequestForm drog("Z12");
        PresidentialPardonForm bres("V15");
        // drog.beSigned(ban);
        // ban.executeForm(drog);
        luk.beSigned(ban);
        luk.execute(ban);
        drog.beSigned(ban);
        drog.execute(ban);
        bres.beSigned(ban);
        bres.execute(ban);
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;    
    }
}