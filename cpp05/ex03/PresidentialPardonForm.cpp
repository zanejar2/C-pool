#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon", 25, 5), target("default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("presidential pardon", 25, 5), target(_target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm("presidential pardon", 25, 5), target(copy.target)
{
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    target = other.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->getExecGrade() && this->getSigned())
        std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else
        throw GradeTooLowException();
}