/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:16:13 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/21 22:26:16 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	std::cout << REDCOLOR <<"-----------------------test with int ---------------------------"
		<< RESETCOLOR << std::endl;
	try
	{
		Array<int> array(3);
		array[0] = 1;
		array[1] = 2;
		array[2] = 3;
		std::cout << array << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << REDCOLOR <<"-----------------------test with string ---------------------------"
		<< RESETCOLOR << std::endl;
	try
	{
		Array<std::string> array1(3);
		array1[0] = "salut";
		array1[1] = "gab";
		array1[2] = "cava";
		std::cout << array1 << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << REDCOLOR <<"-----------------------test with float ---------------------------"
		<< RESETCOLOR << std::endl;
	try
	{
		Array<float> array2(3);
		array2[0] = 1;
		array2[1] = 2;
		array2[2] = 3;
		std::cout << std::fixed << std::setprecision(2) <<array2 << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << REDCOLOR <<"-----------------------test out of rang ---------------------------"
		<< RESETCOLOR << std::endl;
	try
	{
		Array<int> array3(3);
		array3[0] = 1;
		array3[1] = 2;
		array3[3] = 3;
		std::cout << array3 << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << REDCOLOR <<e.what() << RESETCOLOR <<'\n';
	}
	std::cout << REDCOLOR <<"-----------------------test NULL ---------------------------"
		<< RESETCOLOR << std::endl;
	try
	{
		Array<int> array4(0);
		std::cout << array4 << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << REDCOLOR <<e.what() << RESETCOLOR <<'\n';
	}
	std::cout << REDCOLOR <<"-----------------------test Default ---------------------------"
		<< RESETCOLOR << std::endl;
	try
	{
		Array<int> array5(5);
		std::cout << array5 << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << REDCOLOR <<e.what() << RESETCOLOR <<'\n';
	}
	return (0);
}