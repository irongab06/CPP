/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:55:36 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/29 22:55:27 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <iostream>
#include <map>
#include <fstream>
#include <stdexcept>
#include <cstdlib>
#include <iomanip>
#include <cctype>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const& copy);
		BitcoinExchange&	operator=(BitcoinExchange const& copy);
		~BitcoinExchange();
		void	LoadData(std::string const& data);
		void	GetData();
		void	CheckFile(std::string& Filename);
		bool	CompareData(std::string& line);
		class ErrorOpen : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("\033[31mError: could not open file.\033[0m");
			}
		};
		class FormatFile : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("\033[31mError Format File\033[0m");
			}
		};
	private:
		std::map<std::string, double>	_data;
};

#endif
