#include "Span.hpp"

Span::Span() : _span(0), _N(0) {}

Span::Span(unsigned int N) : _N(N) {
	std::cout << "Constructor Span" << std::endl;
}

Span::~Span(){
}

void	Span::addNumber(const size_t integer) {

	size_t	i = _span.size();
	if (i < _N)
		_span.push_back(integer);
	else
		throw	SpanFull();
}

void	Span::addNumber(type_it begin, type_it end)
{
	if (_span.size() == _N)
		throw SpanFull();
	for(; begin != end && _span.size() < _N; ++begin)
		_span.push_back(*begin);
}

unsigned int	Span::shortestSpan()
{
	unsigned int	min = UINT_MAX;
	std::sort(_span.begin(), _span.end());
	std::vector<unsigned int>::iterator	it = _span.begin();
	std::vector<unsigned int>::iterator it_next = _span.begin();
	if (_span.size() <= 1)
		throw ErrorSpan();
	it_next++;
	for (; it_next != _span.end(); it++, ++it_next)
	{
		if (*it_next - *it < min)
			min = *it_next - *it;
	}
	return (min);
}

unsigned int	Span::longestSpan()
{
	unsigned int	max = 0;
	
	if (_span.size() <= 1)
		throw ErrorSpan();
	
	type_it result_min = std::min_element(_span.begin(), _span.end());
	type_it result_max = std::max_element(_span.begin(), _span.end());
	
	max = *result_max - *result_min;
	return (max);
}