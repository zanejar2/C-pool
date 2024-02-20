#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include<iostream>
#include<exception>

class Bureaucrat {
    private :
        const std::string name;
        int grade;
    public :
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();
        const std::string getName() const;
        int getGrade() const;
        void incrementer();
        void decrementer();
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

std::ostream& operator<<(std::ostream & os, const Bureaucrat& bureaucrat);

#endif