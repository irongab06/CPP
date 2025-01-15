#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
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
		class OpenErrorFile : public std::exception
		{
			public:
				virtual const char* what() throw()
				{
					return ("Error open File");
				}
		};
	private:
		std::string	_target;
};

#endif