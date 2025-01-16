/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:43:48 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:43:48 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog : constructor default"<< std::endl;
}

Dog:: Dog(Dog const& copy) : Animal(copy)
{
}

void	Dog::makeSound()const
{
	std::cout << this->getType() <<" : Wouaff Wouaff"<<std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor" << std::endl;
}

Dog& Dog::operator=(Dog const& copy)
{
	_type = copy.getType();
	return (*this);
}

