#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor for \033[31m"<<this->getName()
			<<"\033[0m\n"<<std::endl;
}

FragTrap::~FragTrap()
{
		std::cout << "FragTrap destructor for \033[31m"<<this->getName()
			<<"\033[0m"<<std::endl;
}

FragTrap::FragTrap(FragTrap const& copy) : ClapTrap(copy)
{
}

FragTrap&	FragTrap::operator=(FragTrap const& copy)
{
	if (this != &copy)
		ClapTrap::operator=(copy);
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap\033[31m "<< this->getName()
			<< "\033[0m let's go Bro for high Fives\n"<< std::endl;
}
