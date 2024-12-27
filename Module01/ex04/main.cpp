#include "Replace.hpp"

int	main(int argc, char **argv)
{
	std::string	filename, s1, s2;
	if (argc != 4)
	{
		std::cerr << "Error : this is not the right number of arguments" << std::endl;
		return (1);
	}
	s1 = argv[2], s2 = argv[3];
	if (s1.empty())
	{
		std::cerr << "Error : the replacement argument is missing" << std::endl;
		return (1);
	}
	filename = argv[1];
	std::ifstream in_file (filename.c_str());
	if (in_file.is_open())
	{
		if (!create_file_and_open(filename))
			return (1);
		filename = filename + ".replace";
		find_and_replace(filename, in_file, s1, s2);
	}
	else
	{
		std::cerr << "the file could not be opened" << std::endl;
		return (1);
	}
	return (0);
}
