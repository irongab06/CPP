/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:39:22 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/24 13:39:24 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _gradetosign(150),
	_gradetoexecute(150)
{
	std::cout << "Constructor Form\n" << std::endl;
}

Form::Form(const std::string name, int gradetosign, int gradetoexecute) : 
	_name(name), _signed(false), _gradetosign(gradetosign),
	_gradetoexecute(gradetoexecute)
{
	if (this->_gradetosign <= 0)
		throw	GradeTooHighException();
	if (this->_gradetosign >= 151)
		throw	GradeTooLowException();
	std::cout << "Constructor Form" << std::endl;
}
Form::~Form()
{
	std::cout << "Destructor Form" << std::endl;
}

Form::Form(Form const& copy)
	:
	_name(copy._name),
	_signed(copy._signed),
	_gradetosign(copy._gradetosign),
	_gradetoexecute(copy._gradetoexecute)
{
}

Form& Form::operator=(Form const& copy)
{
	this->_signed = copy._signed;
	return (*this);
}

const std::string	Form::getName()const
{
	return (this->_name);
}

int	Form::getGradeSign()const
{
	return (this->_gradetosign);
}

int	Form::getGradeExecute()const
{
	return (this->_gradetoexecute);
}

bool	Form::getSigned()const
{
	return (this->_signed);
}

void	Form::beSigned(const Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() > this->_gradetosign)
		throw	GradeTooLowException();
	if (this->_signed == true)
		throw	AlreadySignedException();
	if (Bureaucrat.getGrade() <= this->_gradetosign && this->_signed == false)
		this->_signed = true;
}

std::ostream& operator<<(std::ostream& os, Form const& f)
{
	os << "Name formulaire "<< REDCOLOR << f.getName() 
		<< RESETCOLOR << " Grade for signed " << REDCOLOR
		<< f.getGradeSign() << RESETCOLOR << " Grade for execute "
		<< REDCOLOR << f.getGradeExecute() << RESETCOLOR
		<< " is signed ? " << REDCOLOR << ((f.getSigned()) ? "oui" : "non")
		<< RESETCOLOR << std::endl;
	return (os);
}


