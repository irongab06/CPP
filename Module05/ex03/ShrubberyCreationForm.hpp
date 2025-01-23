#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const& target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const& copy);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& copy);
		void execute(Bureaucrat const &executor) const;
	private:
		std::string	_target;
};

#endif
