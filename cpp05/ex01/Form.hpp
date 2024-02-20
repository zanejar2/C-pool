#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private :
        const std::string name;
        bool Signed;
        const int signGrade;
        const int execGrade;
    public :
        Form();
        Form(const std::string name, const int signGrade, const int execGrade);
        Form(const Form &copy);
        Form& operator=(const Form& other);
        ~Form();
        const std::string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;
        void beSigned(Bureaucrat &bureaucrat);
        class GradeTooHighException : public std::exception
        {
            public :
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public :
                const char* what() const throw();
        };

};

std::ostream& operator<<(std::ostream & os, const Form& Form);

#endif
