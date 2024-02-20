#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private :
        const std::string name;
        bool Signed;
        const int signGrade;
        const int execGrade;
    public :
        AForm();
        AForm(const std::string name, const int signGrade, const int execGrade);
        AForm(const AForm &copy);
        AForm& operator=(const AForm& other);
        virtual ~AForm();
        const std::string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;
        void beSigned(Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
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

std::ostream& operator<<(std::ostream & os, const AForm& aform);

#endif
