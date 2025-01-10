/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 08:09:47 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/10 08:09:48 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook	book;
	std::string	line;
	std::cout << "\033[32m ┌──────────────────────────────────┐\033[0m" << std::endl;
	std::cout << "\033[32m │            PhoneBook             │\033[0m" << std::endl;
	std::cout << "\033[32m │             WELCOME              │\033[0m" << std::endl;
	std::cout << "\033[32m │                                  │\033[0m" << std::endl;
	std::cout << "\033[32m │ [ADD] [SEARCH] [EXIT]            │\033[0m" << std::endl;
	std::cout << "\033[32m ├─────────────────┬────────────────┘\033[32m" << std::endl;
	while (std::cin.eof() != 1)
	{
		std::cout << "\033[32m │ PhoneBook       │\033[0m ";
		std::getline(std::cin, line);
		if (line == "ADD")
			book.add_contact();
		if (line == "SEARCH")
			book.get_contact();
		if (line == "EXIT")
			break ;
	}
	if (std::cin.eof())
		std::cout << "\n";
	book.get_byebye();
	return (0);

}
