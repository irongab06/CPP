#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor for \033[31m"<<this->getName()
			<<"\033[0m\n"<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& copy) : ClapTrap(copy)
{
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor for \033[31m"<<this->getName()
			<<"\033[0m"<<std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& copy)
{
	if (this != &copy)
		ClapTrap::operator=(copy);
	return (*this);
}

void	ScavTrap::attack(std::string const& target)
{
		if (this->getEp() != 0 && this->getHp() != 0)
	{
		std::cout <<"ScavTrap \033[31m"<<this->_name<<"\033[0m attacks \033[31m"
				<<target<<"\033[0m, causing \033[33m"<<this->_attack_damage
				<<"\033[0m points of damage!"<<std::endl;
		this->_energie_points--;
	}
	if (this->getHp() == 0)
	{
		std::cout <<"ScavTrap \033[31m"<<this->_name<<"\033[0m Has no more HP"
			<< std::endl;
		return ;
	}
	if (this->getEp() == 0)
		std::cout <<"ScavTrap \033[31m"<<this->_name<<"\033[0m has no more energy"
			<< std::endl; 
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap\033[31m "<< this->getName()
			<< "\033[0m is now in Gate keeper mode.\n"<< std::endl;
}