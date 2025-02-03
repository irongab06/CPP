#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <iostream>
#include <stack>
#include <stdexcept>
#include <sstream>
#include <cstdlib>

class RPN
{
	public:
		RPN();
		RPN(const char *argv);
		RPN(RPN const& copy);
		RPN&	operator=(RPN const& copy);
		void	Resolve_Expression();
		double	Calcul_Expression(std::string &token, std::stack<double> &stack);
		class ErrorExpression : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("\033[31mError Format expression\033[0m");
			}
		};
	private:
		std::string	_expression;
};

#endif
