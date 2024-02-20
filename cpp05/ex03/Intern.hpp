#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Aform;

class Intern {
    public :
        Intern();
        Intern(const Intern& copy);
        Intern& operator=(const Intern& other);
        ~Intern();
        AForm* makeForm(std::string form, std::string target);
        class InternException : public std::exception {
            public :
                const char* what() const throw();
        };
};

#endif