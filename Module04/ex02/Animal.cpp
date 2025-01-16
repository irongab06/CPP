/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:46:47 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:46:49 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal : 🏗️"<< std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal : 🏗️     Type : "<< type << std::endl;
}

Animal::Animal(Animal const& copy)
{
	*this = copy;
}

Animal::~Animal()
{
}

Animal& Animal::operator=(Animal const& copy)
{
	this->_type = copy._type;
	return (*this);
}

std::string	Animal::getType(void)const
{
	return (this->_type);
}
