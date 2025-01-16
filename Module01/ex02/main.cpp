/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:02:39 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 09:02:46 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "string = " << &string << std::endl;
	std::cout <<"stringPTR = " << stringPTR << std::endl;
	std::cout <<"stringREF = " << &stringREF << std::endl;
	std::cout <<"\n";
	std::cout << "string = " << string << std::endl;
	std::cout <<"stringPTR = " << *stringPTR << std::endl;
	std::cout <<"stringREF = " << stringREF << std::endl;

	return (0);
}
