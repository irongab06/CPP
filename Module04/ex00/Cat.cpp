/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:43:39 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:43:39 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat : Constructor default"<< std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor"<< std::endl;
}

Cat::Cat(Cat const& copy) : Animal(copy)
{
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() <<" : Miaou Miaou" <<std::endl;
}

Cat&	Cat::operator=(Cat const& copy)
{
	_type = copy.getType();
	return (*this);
}
