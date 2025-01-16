/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:45:06 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:45:08 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat : 🏗️"<< std::endl;
	this->_Brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat : 🧨"<< std::endl;
	delete this->_Brain;
}

Cat::Cat(Cat const& copy) : Animal(copy)
{
	std::cout << "Cat : Copy 🏗️" << std::endl;
	_Brain = new Brain(*copy._Brain);
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() <<" : Miaou Miaou" <<std::endl;
}

Cat&	Cat::operator=(Cat const& copy)
{
	_type = copy.getType();
	_Brain = new Brain(*copy._Brain);
	return (*this);
}
