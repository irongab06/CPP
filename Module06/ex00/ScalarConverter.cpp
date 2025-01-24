/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:58:19 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/24 16:23:33 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const &copy)
{
	if (this != &copy)
	{
		return (*this);
	}
	return (*this);
}

static void	PrintSpeLitteralFloat(std::string const &value)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << value << std::endl;
	if (value == "inff" || value == "nanf")
		std::cout << "double: " << value.substr(0, 3) << std::endl;
	else
		std::cout << "double: -inf" << std::endl;
}

static void	PrintSpeLitteralDouble(std::string const &value)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << value << "f" << std::endl;
	std::cout << "double: " << value << std::endl;
}
static bool	isfloat(std::string const &value)
{
	bool exponent = false;
	bool point_decimal = false;
	std::size_t i = 0;
	if (!value.empty() && (value[i] == '-' || value[i] == '+'))
		i++;
	for (; i < value.length(); i++)
	{
		char c = value[i];
		if (!isdigit(c) && c != '.' && c != 'e' && c != 'E' && c != 'f' && c != 'F')
			return false;
		if (c == '.')
		{
			if (point_decimal || exponent)
				return false;
			point_decimal = true;
		}
		if (c == 'e' || c == 'E')
		{
			if (exponent || i == 0 || i == value.length() - 1)
				return false;
			exponent = true;
			if (i + 1 < value.length() && (value[i + 1] == '-' || value[i + 1] == '+'))
				i++;
		}
		if ((c == 'f' || c == 'F'))
		{
			if (i != value.length() - 1)
				return false;
		}
	}
	return (true);
}

static void ConvertChar(std::string const &value)
{
	std::cout << "char: " <<value << std::endl;
	std::cout << "int: " <<static_cast<int>(value[0]) << std::endl;
	std::cout << "float: " <<static_cast<float>(value[0]) << std::endl;
	std::cout << "double: " <<static_cast<double>(value[0]) << std::endl;
}
static bool isalldigit(std::string const &value)
{
	std::size_t i = 0;

	if (value[i] == '-' || value[i] == '+')
	{
		i++;
	}
	for (; i < value.length(); i++)
	{
		if (!isdigit(value[i]))
			return (false);
	}
	return (true);
}

static void	ConvertInt(std::string const &value)
{
	long	value_int;
	char *end;
	value_int = strtol(value.c_str(), &end, 10);
	if (errno == ERANGE || value_int > INT_MAX || value_int < INT_MIN)
	{
		std::cerr << REDCOLOR <<"Error: Integer overflow" << RESETCOLOR
			<< std::endl;
		return ;
	}
	if (value_int >= 32 && value_int <= 126)
	{
		std::cout << "char: '"<< static_cast<char>(value_int)
				<< "'"<< std::endl;
	}
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << value_int << std::endl;
	std::cout << std::fixed << std::setprecision(1); //fixed me permet d afficher en valeur flottante un petit ou grand nombre comme 42 devient 42.0
	std::cout << "float: "  << static_cast <float> (value_int)<< "f" << std::endl;
	std::cout << "double: "<<static_cast <double> (value_int) << std::endl;
}

static void	ConvertFloat(std::string const &value)
{
	char *end = NULL;
	double	value_double = strtod(value.c_str(), &end);
	float	value_float = strtof(value.c_str(), &end);
	errno = 0;
	value_float = strtod(value.c_str(), &end);
	if (value_float >= 32 && value_float <= 126)
		std::cout << "char: '"<< static_cast<char>(value_float) << "'"<< std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (value_float <= FLT_MAX && value_float >= FLT_MIN)
		std::cout << "int: " << static_cast<int>(value_float) << std::endl;
	else
		std::cout << "int: Impossible" << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	if (value_float > 1e10f)
	{
		std::cout << "float: "<< std::scientific <<value_float << "f" << std::endl;
		std::cout << "double: "<< std::scientific <<value_double << std::endl;
	}
	else
	{
		std::cout << "float: " <<value_float << "f" << std::endl;
		std::cout << "double: "  << value_double << std::endl;
	}
}

void	ScalarConverter::convert(std::string const &value)
{
	if ( value == "nanf" || value == "inff" || value == "-inff")
		PrintSpeLitteralFloat(value);
	else if ( value == "nan" || value == "inf" || value == "-inf")
		PrintSpeLitteralDouble(value);
	else if (value.size() == 1 && value[0] >= 32
		&& value[0] <= 126 && (value[0] < '0' || value[0] > '9'))
	{
		ConvertChar(value);
	}
	else if (isalldigit(value))
		ConvertInt(value);
	else if (isfloat(value))
		ConvertFloat(value);
	else
		std::cout << REDCOLOR <<"ERROR : invalid input" << RESETCOLOR << std::endl;
}
