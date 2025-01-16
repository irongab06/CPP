/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:03:01 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 09:03:02 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		 std::string	name;
		 Weapon	*_weapon;
	public:
		HumanB(const std::string name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif
