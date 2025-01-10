/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 08:09:39 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/10 08:09:41 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->n = false;
}

Contact::~Contact()
{
}

int	Contact::user() const
{
	return (this->n);
}

static int	ft_digit(const std::string &prompt, std::string &info_user)
{
	size_t	i;

	i = 0;
	while (i < info_user.size())
	{
		if (isdigit(info_user[i]) == 0)
		{
			std::cout << "\033[32m │                 │\033[0m";
			std::cout << "\033[31m Please Digit Input\033[0m\n";
			std::cout << prompt;
			std::getline(std::cin, info_user);
			if (std::cin.eof())
				return (0);
			if (info_user.empty())
				return (1);
			i = 0;
			continue ;
		}
		i++;
	}
	return (0);
}

void	Contact::set_user(const std::string &prompt, std::string &info_user)
{
	if (std::cin.eof())
		return ;
	std::cout << prompt;
	std::getline(std::cin, info_user);
	while (info_user.empty() || (info_user == this->phone_number
		&& ft_digit(prompt, info_user) == 1))
	{
		if (std::cin.eof())
			return ;
		std::cout << "\033[32m │                 │\033[0m";
		std::cout << "\033[31m Please Entry Input\033[0m\n";
		std::cout << prompt;
		std::getline(std::cin, info_user);
	}
}

void	Contact::get_all_user(int i) const
{
	std::string	name = this->first_name.substr(0, 9);
	std::string	lname = this->last_name.substr(0, 9);
	std::string	niname = this->nickname.substr(0, 9);
	
	std::cout << "\033[32m │"<< std::setw(10) <<i<<"│"
		<< std::setw(10) <<ft_point(name)<<"│"
		<< std::setw(10) <<ft_point(lname)<<"│"<<std::setw(10)
		<<ft_point(niname)<<"│\033[0m"<< std::endl;
}
