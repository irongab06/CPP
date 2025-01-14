#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signed(false), _gradetosign(150),
	_gradetoexecute(150)
{
	std::cout << "Constructor Form\n" << std::endl;
}

AForm::AForm(const std::string name, int gradetosign, int gradetoexecute) : 
	_name(name), _signed(false), _gradetosign(gradetosign),
	_gradetoexecute(gradetoexecute)
{
	if (this->_gradetosign <= 0)
		throw	GradeTooHighException();
	if (this->_gradetosign >= 151)
		throw	GradeTooLowException();
	std::cout << "Constructor Form" << std::endl;
}
AForm::~AForm()
{
	std::cout << "Destructor Form" << std::endl;
}

AForm::AForm(AForm const& copy)
	:
	_name(copy._name),
	_signed(copy._signed),
	_gradetosign(copy._gradetosign),
	_gradetoexecute(copy._gradetoexecute)
{
}

AForm& AForm::operator=(AForm const& copy)
{
	this->_signed = copy._signed;
	return (*this);
}

const std::string	AForm::getName()const
{
	return (this->_name);
}

int	AForm::getGradeSign()const
{
	return (this->_gradetosign);
}

int	AForm::getGradeExecute()const
{
	return (this->_gradetoexecute);
}

bool	AForm::getSigned()const
{
	return (this->_signed);
}

void	AForm::beSigned(const Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() > this->_gradetosign)
		throw	GradeTooLowException();
	if (this->_signed == true)
		throw	AlreadySignedException();
	if (Bureaucrat.getGrade() <= this->_gradetosign && this->_signed == false)
		this->_signed = true;
}

std::ostream& operator<<(std::ostream& os, AForm const& f)
{
	os << "Name formulaire "<< REDCOLOR << f.getName() 
		<< RESETCOLOR << " Grade for signed " << REDCOLOR
		<< f.getGradeSign() << RESETCOLOR << " Grade for execute "
		<< REDCOLOR << f.getGradeExecute() << RESETCOLOR
		<< " is signed ? " << REDCOLOR << ((f.getSigned()) ? "oui" : "non")
		<< RESETCOLOR << std::endl;
	return (os);
}


