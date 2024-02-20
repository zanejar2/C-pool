#include "AForm.hpp"

AForm::AForm() : name("default"), Signed(0), signGrade(150), execGrade(150) {}

AForm::AForm(const std::string _name, const int _signGrade, const int _execGrade) : name(_name), Signed(0), signGrade(_signGrade), execGrade(_execGrade)
{
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    else if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &copy) : name(copy.name), Signed(copy.Signed), signGrade(copy.signGrade), execGrade(copy.signGrade)
{
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    else if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
    *this = copy;
}

AForm& AForm::operator=(const AForm& other)
{
    Signed = other.Signed;
    return (*this);
}

AForm::~AForm() {}

const std::string AForm::getName() const
{
    return (this->name);
}

bool AForm::getSigned() const
{
    return (this->Signed);
}

int AForm::getSignGrade() const
{
    return (this->signGrade);
}

int AForm::getExecGrade() const
{
    return (this->execGrade);
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= signGrade)
        Signed = 1;
    else 
        throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low!");
}

std::ostream& operator<<(std::ostream & os, const AForm& aform)
{
    os << aform.getName() << ", sign grade " << aform.getSignGrade() << ", execute grade " << aform.getExecGrade() << ", is signed " << aform.getSigned();
    return (os);
}
