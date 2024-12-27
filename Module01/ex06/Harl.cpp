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
	std::string	_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (_level[i] == level)
		{
			switch (i)
			{
				case 0:
					debug();
					// fall-through
				case 1:
					info();
					// fall-through
				case 2:
					warning();
					// fall-through
				case 3:
					error();
					break ;
			}
			return ;
		}
	}
	std::cout << "\033[31m[ Probably complaining"
		<<"about insignificant problems ]\033[0m" << std::endl;
}
