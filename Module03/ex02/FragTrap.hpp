#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const name);
		~FragTrap();
		FragTrap(FragTrap const& copy);
		FragTrap&	operator=(FragTrap const& copy);
		void highFivesGuys(void);
};

#endif