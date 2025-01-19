/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:31:21 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/19 21:56:09 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data	data;
	uintptr_t	raw = 0;
	data._age = 38;
	data._name = "Gabriel";
	data._city = "Nice";
	
	std::cout << REDCOLOR
		<<"----------------------init Data-------------------------\n" << RESETCOLOR
		<< std::endl;
		
	std::cout << REDCOLOR << "Adress Data : "<< RESETCOLOR <<&data << std::endl;
	std::cout << REDCOLOR << "Age Data : "<< RESETCOLOR <<data._age << std::endl;
	std::cout << REDCOLOR << "Name Data : "<< RESETCOLOR <<data._name << std::endl;
	std::cout << REDCOLOR << "City Data : "<< RESETCOLOR <<data._city << std::endl;
	std::cout << REDCOLOR
	
		<<"\n----------------------Serializer-------------------------\n" << RESETCOLOR
		<< std::endl;
	raw = Serializer::serialize(&data);
	std::cout << REDCOLOR << "Unsigned int adress Data : "<< RESETCOLOR << raw << std::endl;
	std::cout << REDCOLOR
	
		<<"\n----------------------Deserializer-------------------------\n" << RESETCOLOR
		<< std::endl;
		
	Data* deserialized = Serializer::deserialize(raw);
	std::cout << REDCOLOR << "Adress Data : "<< RESETCOLOR << deserialized << std::endl;
	std::cout << REDCOLOR << "Age Data : "<< RESETCOLOR <<deserialized->_age << std::endl;
	std::cout << REDCOLOR << "Name Data : "<< RESETCOLOR <<deserialized->_name << std::endl;
	std::cout << REDCOLOR << "City Data : "<< RESETCOLOR <<deserialized->_city << std::endl;
	return (0);
}