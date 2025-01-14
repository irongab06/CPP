#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _target("Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string& _target) :
	AForm("ShrubberyCreationForm", 147, 135)
{
	std::cout << "Constructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const&copy) : 
	AForm(copy), _target(copy._target)
{
	std::cout << "Constructor copy ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->_target = copy._target;
	}
	return (*this);
}

ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() != true)
		throw	NotSignedException();
	if (this->_gradetoexecute > executor.getGrade())
		throw	GradeTooLowException();
	std::string	form_name = this->_target + "_shrubbery";
	std::ostream	temp(form_name.c_str());
	if (!temp.is_open())
	{
		temp.close();
		throw OpenErrorFile();
	}
	else
	{
		temp<< "      /\\      \n"
            << "     /\\*\\     \n"
            << "    /\\O\\*\\    \n"
            << "   /*/\\/\\/\\   \n"
            << "  /\\O\\/\\*\\/\\  \n"
            << " /\\*\\/\\*\\/\\/\\ \n"
            << "/\\O\\/\\/*/\\/O/\\\n"
            << "      ||      \n"
            << "      ||      \n"
            << "      ||      \n"<< std::endl;
		temp.close();
	}
}