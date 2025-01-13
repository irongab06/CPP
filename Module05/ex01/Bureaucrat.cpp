#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name),
		_grade(grade)
{
	if (this->_grade <= 0)
		throw GradeTooHighException();
	if (this->_grade >= 151)
		throw GradeTooLowException();
	std::cout << "Constructor Bureaucrat\n" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy)
{
	*this = copy;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& copy)
{
	this->_grade = copy._grade;
	return (*this);
}

const std::string&	Bureaucrat::getName()const
{
	return (this->_name);
}

int	Bureaucrat::getGrade()const
{
	return (this->_grade);
}

void	Bureaucrat::setupgrade()
{
	this->_grade -= 1;
	std::cout << "\033[91mUp Grade \033[0m" << "< " 
		<<this->getName()<< " > " << "\n"<<std::endl;
	if (this->_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::setdowngrade()
{
	this->_grade += 1;
	std::cout << "\033[91mDown\033[0m" << std::endl;
	if (this->_grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(Form &form)const
{
	try
	{
		form.beSigned(*this);
		std::cout << REDCOLOR <<this->getName()<< RESETCOLOR
			<< GREENCOLOR << " signed "<< RESETCOLOR << " < " << form.getName()
			<< " > " << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << REDCOLOR <<this->getName()<< RESETCOLOR
			<< " couldn’t sign " << " < " << form.getName() << " > "
			<< " Because " << GREENCOLOR << e.what() << RESETCOLOR
			<< "\n" << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& f)
{
	os << REDCOLOR << f.getName() << RESETCOLOR
		<< ", bureaucrat grade " << REDCOLOR <<f.getGrade() << RESETCOLOR;
	return (os);
}
