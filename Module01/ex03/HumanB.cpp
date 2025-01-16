/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:02:58 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 09:02:59 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string name) : name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	
}

void	HumanB::attack()
{
	if (_weapon == NULL)
		std::cout << name << " has no weapon to attack " << std::endl;
	else
		std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
}
