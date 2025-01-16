/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:51:12 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:53:19 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const& copy) : AMateria(copy)
{
}

Cure&	Cure::operator=(Cure const& copy)
{
	this->_type = copy.getType();
	return (*this);
}

AMateria* Cure::clone() const
{
	Cure*	copy = new Cure();
	return (copy);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *"<< std::endl;
}
