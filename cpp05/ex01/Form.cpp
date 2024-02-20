#include "Form.hpp"

Form::Form() : name("default"), Signed(0), signGrade(150), execGrade(150) {}

Form::Form(const std::string _name, const int _signGrade, const int _execGrade) : name(_name), Signed(0), signGrade(_signGrade), execGrade(_execGrade)
{
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    else if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &copy) : name(copy.name), Signed(0), signGrade(copy.signGrade), execGrade(copy.signGrade) {}

Form& Form::operator=(const Form& other)
{
    Signed = other.Signed;
    return (*this);
}

Form::~Form() {}

const std::string Form::getName() const
{
    return (this->name);
}

bool Form::getSigned() const
{
    return (this->Signed);
}

int Form::getSignGrade() const
{
    return (this->signGrade);
}

int Form::getExecGrade() const
{
    return (this->execGrade);
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= signGrade)
        Signed = 1;
    else 
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low!");
}

std::ostream& operator<<(std::ostream & os, const Form& Form)
{
    os << Form.getName() << ", sign grade " << Form.getSignGrade() << ", execute grade " << Form.getExecGrade() << ", is signed " << Form.getSigned();
    return (os);
}
