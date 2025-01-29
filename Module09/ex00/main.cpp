/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:55:04 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/29 22:41:49 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <map>
#include <string>
#include <iostream>
#include <map>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		try
		{
			std::string Filename = argv[1];
			BitcoinExchange	btc;
			btc.CheckFile(Filename);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cout << "\033[31mError: could not open file.\033[0m"<< std::endl;
}
