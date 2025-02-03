#include "RPN.hpp"

int	main(int argc , char **argv)
{
	if (argc == 2)
	{
		try
		{
			RPN	expression(argv[1]);
			expression.Resolve_Expression();
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr<< "\033[31mError : Need one expression mathematical\033	[0m" << std::endl;
	return (0);
}
