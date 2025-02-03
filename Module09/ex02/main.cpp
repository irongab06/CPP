#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	std::string	list = "";
	if (argc > 1) {
		for (int i = 1; i < argc; i++)
		{
			list += argv[i];
			if (i < argc - 1)
				list += " ";
		}
		try {
			PmergeMe	sort(list);
		}
		catch (std::exception &e) {
			std::cerr << "\033[31m" << e.what() << "\033[0m" <<  std::endl;
		}
	}
	return (0);
}