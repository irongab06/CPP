#ifndef FORM_HPP
# define FORM_HPP
# define REDCOLOR "\033[31m"
# define GREENCOLOR "\033[32m"
# define RESETCOLOR "\033[0m"

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <ostream>

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string name, int gradetosign, int gradetoexecute);
		~Form();
		Form(Form const& copy);
		Form&	operator=(Form const& copy);
		const std::string	getName()const;
		int	getGradeSign()const;
		int	getGradeExecute()const;
		bool	getSigned()const;
		void	beSigned(const Bureaucrat &Bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high!");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low!");
				}
		};
		class AlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form is Already signed!");
				}

		};
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradetosign;
		const int			_gradetoexecute;
};

std::ostream& operator<<(std::ostream& os, Form const& f);

#endif
