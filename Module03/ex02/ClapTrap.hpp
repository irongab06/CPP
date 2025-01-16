/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:39:34 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:39:36 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string const name);
		ClapTrap(std::string const name, int Hp, int Ep, int Ad);
		ClapTrap(ClapTrap const& copy);
		ClapTrap&			operator=(ClapTrap const& copy);

		void				attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		std::string const&	getName()const;
		const unsigned int&	getEp()const;
		const unsigned int&	getHp()const;

	protected:
		std::string			_name;
		unsigned int		_hit_points;
		unsigned int		_energie_points;
		unsigned int		_attack_damage;
};
#endif
