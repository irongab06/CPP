/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 08:09:27 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/10 08:09:29 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	ft_toupper(char *argv)
{
	std::string arg = argv;
	for(size_t i = 0; i < arg.size(); i++)
		arg[i] = std::toupper(arg[i]);
	std::cout << arg;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; argv[i]; i++)
	{
		ft_toupper(argv[i]);
		if (i < argc - 1)
			std::cout << " ";
	}	
	std::cout << std::endl;
	return (0);
}