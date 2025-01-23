#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iterator>
#include <iostream>
#include <string>
#include <stdexcept>
#include <cstddef>
#include <algorithm>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(Span const& copy);
		Span&	operator=(Span const& copy);
		~Span();
		void	addNumber(const size_t integer);
		void	shortestSpan();
		void	longestSpan();
	class SpanFull : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Span is full");
			}
	};

	private:
		std::vector<unsigned int>	_span;
		size_t						_N;

};

#endif