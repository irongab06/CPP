#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "constructor Intern" << std::endl;
}

Intern::~Intern()
{
	std::cout << "destructor Intern" << std::endl;
}

Intern::Intern(Intern const& copy)
{
	*this = copy;
	std::cout << "constructor copy Intern" << std::endl;
}

Intern&	Intern::operator=(Intern const& copy)
{
	if (this != &copy)
		return (*this);
	return (*this);
}

AForm*	Intern::makeForm(std::string name_form, std::string target)
{
	std::string const form[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm	*ret = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (name_form == form[i])
		{
			switch (i)
			{
				case 0:
					std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
					return (ret = new ShrubberyCreationForm(target));
				case 1:
					std::cout << "Intern creates RobottomyRequestForm" << std::endl;
					return (ret = new RobottomyRequestForm(target));
				case 2:
					std::cout << "Intern creates PresidentialPardonForm" << std::endl;
					return (ret = new PresidentialPardonForm(target));
			}
		}
	}
	throw	NotValidForm();
	return (0);
}