/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:34:52 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:35:10 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	hero("Ironman");
	ClapTrap	enemy("Thanos");
	ScavTrap	new_hero("Spiderman");

	while (hero.getEp() > 0)
		hero.attack(enemy.getName());
	std::cout<<"\n--------------------------------\n"<<std::endl;
	enemy.takeDamage(9);
	std::cout<<"\n--------------------------------\n"<<std::endl;
	enemy.attack(hero.getName());
	std::cout<<"\n--------------------------------\n"<<std::endl;
	hero.takeDamage(3);
	std::cout<<"\n--------------------------------\n"<<std::endl;
	hero.beRepaired(5);
	std::cout<<"\n--------------------------------\n"<<std::endl;
	enemy.beRepaired(3);
	new_hero.attack("Thanos");
	enemy.takeDamage(20);
	enemy.beRepaired(3);
	new_hero.takeDamage(120);
	new_hero.attack("Thanos");
	new_hero.guardGate();
	return (0);
}
