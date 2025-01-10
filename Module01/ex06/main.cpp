#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl	Harl;
		std::string level = argv[1];
		Harl.complain(level);
	}
	else
	{
		std::cerr << "Error : this is not the right number of arguments" << std::endl;
		return (1);
	}
	return (0);
}
