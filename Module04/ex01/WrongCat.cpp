/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:45:36 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:45:39 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat : 🏗️"<< std::endl; 
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : 🧨"<< std::endl;
}

WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal(copy)
{
}

WrongCat&	WrongCat::operator=(WrongCat const& copy)
{
	this->_type = copy.getType();
	return (*this);
}

void	WrongCat::makeSound()const
{
	std::cout << "Wrong miaouuuuu"<< std::endl;
}
