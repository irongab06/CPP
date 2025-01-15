#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
	Intern();
	~Intern();
	Intern(Intern const& copy);
	Intern&	operator=(Intern const& copy);
	AForm* makeForm(std::string name_form, std::string target);
	class NotValidForm : public	std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("not valid form");
			}
	};
};

#endif