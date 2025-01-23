#ifndef AFORM_HPP
# define AFORM_HPP
# define REDCOLOR "\033[31m"
# define GREENCOLOR "\033[32m"
# define RESETCOLOR "\033[0m"

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <ostream>
#include <cstdlib>

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(const std::string name, int gradetosign, int gradetoexecute);
		virtual ~AForm();
		AForm(AForm const& copy);
		AForm&	operator=(AForm const& copy);
		const std::string	getName()const;
		int	getGradeSign()const;
		int	getGradeExecute()const;
		bool	getSigned()const;
		void	beSigned(const Bureaucrat &Bureaucrat);
		virtual void  execute(Bureaucrat const &executor) const = 0;

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
					return ("Grade too low for signed!");
				}
		};
		class GradeTooLowExceptionexec : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low for execution!");
				}
		};
		class AlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("AForm is Already signed!");
				}

		};
		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Not signed!");
				}
		};
		class OpenErrorFile : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error open File");
				}
		};
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradetosign;
		const int			_gradetoexecute;
};

std::ostream& operator<<(std::ostream& os, AForm const& f);

#endif
