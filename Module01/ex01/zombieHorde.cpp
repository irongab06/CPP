/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:02:34 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 09:02:34 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i;

	i = 0;
	Zombie* horde = new Zombie[N];
	while (i < N)
	{
		horde[i].set_name(name);
		horde[i].get_name();
		i++;
	}
	i = 0;
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	return (horde);
}
