#include "Span.hpp"

Span::Span() : _span(NULL), _N(0) {}

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

void	Span::shortestSpan()
{
	std::vector<unsigned int>::iterator it = _span.begin();
	std::vector<unsigned int>::iterator ite = _span.end();
	std::sort(it, ite);
	
}