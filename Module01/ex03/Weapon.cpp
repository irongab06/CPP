/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:03:08 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 09:03:09 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : type(weapon)
{
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

const std::string&	Weapon::getType()const
{
	return (this->type);
}
