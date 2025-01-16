/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:04:03 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 09:04:05 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl	Harl;
		std::string level = argv[1];
		Harl.complain(level);
	}
	else
	{
		std::cerr << "Error : this is not the right number of arguments" << std::endl;
		return (1);
	}
	return (0);
}
