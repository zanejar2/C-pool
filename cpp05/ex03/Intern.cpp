#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& copy)
{
    *this = copy;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return (*this);
}

Intern::~Intern() {}

const char* Intern::InternException::what() const throw()
{
    return ("Form not found!");
}

AForm* Intern::makeForm(std::string _form, std::string target)
{
    AForm* form;
    std::string list[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int i;
    for (i = 0; i < 3; i++){
        if (list[i] == _form)
            break;
    }
    switch (i) {
        case 0:
            form = new ShrubberyCreationForm(target);
            std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
            break;
        case 1:
            form = new RobotomyRequestForm(target);
            std::cout << "Intern creates RobotomyRequestForm" << std::endl;
            break;
        case 2:
            form = new PresidentialPardonForm(target);
            std::cout << "Intern creates PresidentialPardonForm" << std::endl;
            break;
        default: 
            throw InternException();
    }
    return (form);
}