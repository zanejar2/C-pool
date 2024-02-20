#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137), target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : AForm("shrubbery creation", 145, 137), target(_target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("shrubbery creation", 145, 137), target(copy.target)
{
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    target = other.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->getExecGrade() && this->getSigned())
    {
        std::ofstream file;
        file.open(target + "_shrubbery", std::ios::out);
        if (file.fail())
        {
            std::cout << target << " file failed to open" << std::endl;
            return ;
        }
		file << "             /\\ " << std::endl;
		file << "            /  \\ " << std::endl;
		file << "           /$$$$\\ " << std::endl;
		file << "          /$$$$$$\\ " << std::endl;
		file << "         /        \\ " << std::endl;
		file << "        /$$$$$$$$$$\\ " << std::endl;
		file << "       /$$$$$$$$$$$$\\ " << std::endl;
		file << "      /              \\ " << std::endl;
		file << "     /$$$$$$$$$$$$$$$$\\ " << std::endl;
		file << "    /$$$$$$$$$$$$$$$$$$\\ " << std::endl;
		file << "   /                    \\ " << std::endl;
		file << "  /$$$$$$$$$$$$$$$$$$$$$$\\ " << std::endl;
		file << " /$$$$$$$$$$$$$$$$$$$$$$$$\\ " << std::endl;
        file << "----------------------------- " << std::endl;
        file << "            |||||              " << std::endl;
        file << "            -----               " << std::endl;
        file.close();
    }
    else
        throw GradeTooLowException();
}
