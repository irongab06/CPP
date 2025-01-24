/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:31:38 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/24 16:13:32 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# define REDCOLOR "\033[31m"
# define RESETCOLOR "\033[0m"

#include <string>
#include <iostream>
#include <stdint.h>

struct Data
{
	std::string	_name;
	std::string	_city;
	int			_age;
};


class Serializer
{
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	private:
		Serializer();
		~Serializer();
		Serializer(Serializer const &copy);
		Serializer&	operator=(Serializer const &copy);
};

#endif
