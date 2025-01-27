/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:43:00 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/27 11:43:01 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#define REDCOLOR "\033[31m"
#define RESETCOLOR "\033[0m"

#include <vector>
#include <iterator>
#include <iostream>
#include <string>
#include <stdexcept>
#include <cstddef>
#include <algorithm>
#include <climits>

typedef std::vector<unsigned int>::iterator type_it;

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(Span const& copy);
		Span&	operator=(Span const& copy);
		~Span();
		void	addNumber(const size_t integer);
		void	addNumber(type_it begin,
			type_it end);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
	class SpanFull : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Span is full");
			}
	};
	class ErrorSpan : public std::exception
	{
		public:
			virtual char const* what() const throw()
			{
				return ("Cannot calculate a distance");
			}
	};
	private:
		std::vector<unsigned int>	_span;
		size_t						_N;

};

#endif
