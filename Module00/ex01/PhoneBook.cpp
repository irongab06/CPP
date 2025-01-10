/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 08:09:54 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/10 08:09:54 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	this->index_full = 0; 
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact()
{
	int	i;

	i = 0;
	while (i < 8 && contact[i].user() == true)
		i++;
	if (i == 8)
	{
		std::cout << "\033[32m ├─────────────────┴────────────────┐\033[0m" << std::endl;
		std::cout << "\033[32m │             List Full            │\033[0m" << std::endl;
		std::cout << "\033[32m ├─────────────────┬────────────────┘\033[32m" << std::endl;
		contact[this->index_full].new_user();
		this->index_full = (this->index_full + 1) % 8;
		return ;
	}
	contact[i].new_user();
	return ;
}

void	PhoneBook::get_contact() const
{
	int	i;

	i = 0;
	std::cout << "\033[32m ├──────────┬──────┴───┬\033[0m";
	std::cout << "\033[32m──────────┬──────────┐\033[0m" << std::endl;
	std::cout << "\033[32m │   Index  │FirstName │\033[0m";
	std::cout << "\033[32m LastName │ NickName │\033[0m" << std::endl;
	std::cout << "\033[32m ├──────────┼──────────┼\033[0m";
	std::cout << "\033[32m──────────┼──────────┤\033[0m" << std::endl;
	while (contact[i].user() == true)
	{
		contact[i].get_all_user(i);
		i++;
	}
	if (i == 0)
	{
		std::cout << "\033[32m ├──────────┴──────┬───┴"
		<<"──────────┴──────────┘\033[0m" << std::endl;
		return ;
	}
	if (i > 0)
	{
		get_one_contact();
		return ;
	}	
	std::cout << "\033[32m ├──────────┴──────┼───┴"
		<<"──────────┴──────────┘\033[0m" << std::endl;
	return ;
}

void	PhoneBook::get_byebye()
{
		std::cout << "\033[32m ├─────────────────┴────────────────┐\033[0m" << std::endl;
		std::cout << "\033[32m │              BYE BYE             │\033[0m" << std::endl;
		std::cout << "\033[32m └──────────────────────────────────┘\033[32m" << std::endl;
}

void	PhoneBook::get_one_contact() const
{
	std::string	line;
	int	i = 0;

	std::cout << "\033[32m ├──────────┴──────┬───┴"
		<<"──────────┴──────────┘\033[0m" << std::endl;
	std::cout << "\033[32m │ Give me Index   │\033[0m ";
	while (std::cin.eof() != 1)
	{
		std::getline(std::cin, line);
		if (std::cin.eof())
			return ;
		if (line.size() == 1 && line[0] >= '0' && line[0] <= '7')
		{
			i = atoi(line.c_str());
			if (contact[i].user() == true)
			{
				contact[i].get_print_contact();
				return ;
			}
		}
		std::cout << "\033[32m │                 │\033[0m";
		std::cout << "\033[31m Index Entry Error \033[0m\n";
		std::cout << "\033[32m │ Give me Index   │\033[0m ";
	}
}
