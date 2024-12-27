#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
	std::cout << "\033[31mDEBUG : \033[0mmessage" << std::endl;
}

void Harl::info( void )
{
	std::cout << "\033[31mINFO : \033[0mmessage" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "\033[31mWARNING : \033[0mmessage" << std::endl;
}

void Harl::error( void )
{
	std::cout << "\033[31mERROR : \033[0mmessage" << std::endl;
}

void Harl::complain(std::string level)
{
	int	i;

	i = 0;
	void (Harl::*ft[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		if (_level[i] == level)
		{
			(this->*ft[i])();
			return ;
		}
		i++;
	}
	std::cout << "\033[31mError : \033[0mformat level" << std::endl;
}
