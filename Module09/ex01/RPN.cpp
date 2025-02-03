#include "RPN.hpp"

RPN::RPN() : _expression("") {}

RPN::RPN(const char *argv) : _expression(argv) {}

RPN::RPN(RPN const& copy) : _expression(copy._expression) {}

RPN& RPN::operator=(RPN const& copy) {
	if (this != &copy)
		_expression = copy._expression;
	return (*this);
}	

static bool	Check_Format_expression(std::string &expression)
{
	std::istringstream	iss(expression);
	std::string			token;
	while (iss >> token)
	{
		if (token.size() > 1)
			return (false);
		if (token[0] != '*'
			&& token[0] != '+'
			&& token[0] != '-'
			&& token[0] != '/'
			&& (token[0] < '0' || token[0] > '9'))
			return (false);
	}
	return (true);
}
double	RPN::Calcul_Expression(std::string &token, std::stack<double> &stack)
{
	if (stack.size() >= 2) {
		double	first = stack.top();
		stack.pop();
		double	second = stack.top();
		stack.pop();
		for (int i = 0; i < 4; i++)
		{
			switch (token[0])
			{
				case '+' :
					return (second + first);
				case '-' :
					return (second - first);
				case '/' :
					return (second / first);
				case '*' :
					return (second * first);
			}
		}
	}
	else
		throw	ErrorExpression();
	return (0);
}

void	RPN::Resolve_Expression()
{
	if (!Check_Format_expression(_expression))
		throw	ErrorExpression();
	std::istringstream	iss(_expression);
	std::string			token;
	std::stack<double>	stack;
	while (iss >> token)
	{
		if (stack.size() == 0 && (token[0] == '+' || token[0] == '*' || token[0] == '-' || token[0] == '/'))
			throw	ErrorExpression();
		if (token[0] == '+' || token[0] == '*' || token[0] == '-' || token[0] == '/') {
			stack.push(Calcul_Expression(token, stack));
		}
		if (token[0] >= '0' && token[0] <= '9') {
			stack.push(atoi(token.c_str()));
		}
	}
	if (stack.size() == 1)
		std::cout << stack.top() << std::endl;
	else
		throw	ErrorExpression();
}
