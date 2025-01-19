/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:58:14 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/19 21:58:15 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# define	REDCOLOR "\033[31m"
# define	RESETCOLOR "\033[0m"

#include <string>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <climits>
#include <cfloat>
#include <cerrno>
#include <iomanip>

class ScalarConverter
{
	public:
		static void	convert(std::string const &litteral);
		~ScalarConverter();
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const& copy);
		ScalarConverter&	operator=(ScalarConverter const& copy);
};

#endif
