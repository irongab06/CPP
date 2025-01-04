#ifndef SCRAVTRAP_HPP
# define SCRAPTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const& copy);
		~ScavTrap();
		ScavTrap&	operator=(ScavTrap const& copy);
		void	attack(std::string const& target);
		void guardGate(void);
};

#endif