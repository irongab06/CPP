/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:44:11 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:44:12 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal : Default Constructor"<< std::endl;
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type)
{
	std::cout << "WrongAnimal: Constructor Type"<< std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor"<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy)
{
	*this = copy;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& copy)
{
	_type = copy.getType();
	return (*this);
}

std::string	WrongAnimal::getType()const
{
	return (this->_type);
}

void	WrongAnimal::makeSound()const
{
	std::cout << "I am not a Wrongcat\n"<< std::endl;
}
