/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:42:44 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/27 11:46:16 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::cout << "\033[31m---------------------test int find-------------------\033[0m\n"
			<< std::endl; 
	std::vector<int> integer;
	integer.push_back(1);
	integer.push_back(2);
	integer.push_back(3);
	integer.push_back(4);
	easyfind(integer, 3);
	std::cout << "\033[31m\n---------------------test long not find-------------------\033[0m\n"
			<< std::endl;
	std::vector<long> long_integer;
	integer.push_back(1);
	integer.push_back(2);
	integer.push_back(3);
	integer.push_back(4);
	easyfind(long_integer, 5);
}
