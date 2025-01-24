/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:38:41 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/24 13:38:42 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
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
	std::cout << "Constructor Bureaucrat" << std::endl;
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
	std::cout << "\033[91mup\033[0m" << std::endl;
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

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& f)
{
	os << f.getName()<< ", bureaucrat grade " << f.getGrade();
	return (os);
}
