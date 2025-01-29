#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	LoadData("data.csv");
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const& copy) : _data(copy._data) {}

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange const& copy) {
	if (this != &copy)
		_data = copy._data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(){}

static bool	CheckValidDate(std::string &line)
{
	int	YYYY = std::atoi(line.substr(0, 4).c_str());
	int	MM = std::atoi(line.substr(5, 6).c_str());
	int	DD = std::atoi(line.substr(8, 9).c_str());
	if ((YYYY == 2009 && MM == 1 && DD < 2)
		|| (YYYY == 2022 && MM == 3 && DD > 29)
		|| (YYYY == 2022 && MM > 3))
		return (false);
	if (YYYY < 2009 || YYYY > 2022|| MM < 1 || MM > 12 || DD < 1 || DD > 31)
		return (false);
	if (MM == 4 || MM == 6 || MM == 9 || MM == 11) {
		if (DD > 30)
			return (false);
	}
	if (YYYY % 4 == 0 && (YYYY % 100 != 0 || YYYY % 400 == 0)) {
		if (MM == 2 && DD > 29)
			return (false);
	}
	else {
		if (MM == 2 && DD > 28)
			return (false);
	}
	return (true);
}


static bool	CheckDate(std::string& line)
{
	if (line == "")
		return (false);
	for (int i = 0; i <= 12; i++) {
		if (i < 4 || (i > 4 && i < 7) || (i > 7 && i < 10)) {
			if (!std::isdigit(line[i])) {
				std::cerr << "Error: bad input => " << line.substr(0, 11) << std::endl;
				return (false);
			}
		}
		if ((i == 4 && line[i] != '-') || (i == 7 && line[i] != '-')
			|| (i == 10 && line[i] != ' ') || (i == 12 && line[i] != ' ')
			|| (i == 11 && line[i] != '|')) {
			std::cerr << "Error: bad input => " << line.substr(0, 11) << std::endl;
			return (false);
		}
	}
	if (!CheckValidDate(line)) {
		std::cerr << "Error: bad input => " << line.substr(0, 11) << std::endl;
		return (false);
	}
	return (true);
}

static bool	CheckValue(std::string& line)
{
	char	*end;
	std::string temp_line = line.substr(12);
	double value = std::strtod(temp_line.c_str(), &end);
	errno = 0;
	if (*end != '\0' || errno == ERANGE) {
		std::cerr << "Error : Format value" << std::endl;
		return (false);
	}
	if (value > 1000) {
		std::cerr << "Error: too large a number." << std::endl;
		return (false);
	}
	if (value < 0) {
		std::cerr << "Error: not a positive number." << std::endl;
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::CompareData(std::string &line)
{
	std::map<std::string, double>::iterator it;
	char	*end;
	std::string temp_line = line.substr(12);
	double value = std::strtod(temp_line.c_str(), &end);
	std::string date = line.substr(0, 10);
	it = _data.find(date);
	if (it != _data.end()) {
		std::cout << date << " => " << value << " = "
			<< value * it->second << std::endl;
		return (true);
	}
	it = _data.lower_bound(date);
	if (it == _data.begin()) {
		std::cout << date << " => " << value << " = "
			<< value * it->second << std::endl;
		return true;
	}
	it--;
	std::cout << date << " => " << value << " = "
			<< value * it->second << std::endl;
	return (true);
}

void	BitcoinExchange::CheckFile(std::string& Filename)
{
	std::ifstream	fd_input(Filename.c_str());
	if (!fd_input.is_open())
		throw	ErrorOpen();
	std::string	line;
	std::getline(fd_input, line);
	if (line != "date | value") {
		std::cerr << "Error : No Header Infile" << std::endl;
		return ;
	}
	while (std::getline(fd_input, line))
	{
		if (!CheckDate(line))
			continue ;
		if (!CheckValue(line))
			continue ;
		if (!CompareData(line))
			continue ;
	}
}

void	BitcoinExchange::LoadData(std::string const& data) {
	if (data.size() <= 4 )
		throw	FormatFile();
	size_t pos = data.find(".csv");
	if (pos != (data.size() - 4))
		throw	FormatFile();
	std::ifstream	fd_data(data.c_str());
	if (!fd_data.is_open())
		throw ErrorOpen();
	std::string	line;
	std::getline(fd_data, line);
	while (std::getline(fd_data, line))
	{
		std::string	date = line.substr(0, 10);
		double		value = std::atof(line.substr(11).c_str());
		_data[date] = value;
	}
}
