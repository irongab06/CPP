#include "Replace.hpp"

bool	create_file_and_open(std::string filename)
{
	std::string filename_replace = filename + ".replace";
	std::ofstream temp(filename_replace.c_str());
	if (!temp.is_open())
	{
		temp.close();
		std::cerr << "error opening file" << std::endl;
		return (false);
	}
	else
	{
		temp.close();
		return (true);
	}
}

void	find_and_replace(const std::string& filename, std::ifstream& in_file, 
			const std::string& s1, const std::string& s2)
{
	std::string	line;
	std::size_t	pos;

	std::ofstream of_file(filename.c_str());
	while (std::getline(in_file, line))
	{
		std::string	new_line;
		pos = line.find(s1);
		if (pos != std::string::npos)
		{
			std::string before = line.substr(0, pos);
			std::string after = line.substr(pos + s1.size(), line.size());

			new_line = new_line + before;
			//if (pos != 0)
				new_line = new_line + s2;
			new_line = new_line + after + "\n";
		}
		else
			new_line = new_line + line + "\n";
		of_file << new_line;
	}
}

