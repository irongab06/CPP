/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:02:00 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 09:02:02 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*	Bjorn = newZombie("Bjorn ");
	Bjorn->announce();
	randomChump("Ragnar ");
	delete Bjorn;
	return (0);
}
