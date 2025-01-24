/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:51:45 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/24 13:51:47 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _target("Default")
{
	std::cout << "constructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) :
	AForm(target, 25, 5), _target(target)
{
	std::cout << "constructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy) :
	AForm(copy), _target(copy._target)
{
	std::cout << "Constructor copy PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->_target = copy._target;
	}
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor)const
{
	AForm::execute(executor);	
	std::cout << executor.getName() 
		<<" has been pardoned by Zaphod Beeblebrox" << std::endl;
}
