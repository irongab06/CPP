/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:02:50 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 09:02:51 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string name, Weapon& Weapon) : name(name), _weapon(Weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout <<this->name<<" attacks with their "<<_weapon.getType()<< std::endl;
}
