/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:02:53 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 09:02:55 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"


class HumanA
{
	private:
		std::string		name;
		Weapon& _weapon;

	public:
		HumanA(const std::string name, Weapon& Weapon);
		~HumanA();
		void	attack();
};

#endif
