/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:42:49 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/27 11:47:03 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

	std::cout << REDCOLOR <<"---------------------Test subject ----------------------------\n"
			<< RESETCOLOR << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << REDCOLOR <<"---------------------Test tab Full ----------------------------\n"
			<< RESETCOLOR << std::endl;
	Span test = Span(0);

	unsigned int	i[5] = {4, 3, 2, 1, 5};
	std::vector<unsigned int> vec(i , i + 5);
	try
	{
		test.addNumber(vec.begin(), vec.end());
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr <<e.what() << '\n';
	}

	std::cout << REDCOLOR <<"---------------------Test tab  ----------------------------\n"
			<< RESETCOLOR << std::endl;
	
	Span test1 = Span(5);

	unsigned int j[5] = {2, 1, 9, 3, 8};
	std::vector<unsigned int> vec1(j , j + 5);
	try
	{
		test1.addNumber(vec1.begin(), vec1.end());
		std::cout << test1.shortestSpan() << std::endl;
		std::cout << test1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr <<e.what() << '\n';
	}
return 0;
}
