#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request", 72, 45), target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("robotomy request", 72, 45), target(_target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm("robotomy request", 72, 45), target(copy.target)
{
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    target = other.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->getExecGrade() && this->getSigned())
    {
        std::cout << "some drilling noises..."  << std::endl;
        if (time(NULL) % 2)
            std::cout << target << " has been robotomized successfully" << std::endl;
        else
            std::cout <<  target << " has failed" << std::endl;
    }
    else
    {
        throw GradeTooLowException();
    }
}