#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
	std::cout << _name << " is destroyed" << std::endl;
}

void	Zombie::announce(void)const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}
void	Zombie::get_name(void)const
{
	std::cout << this->_name << " is Born" << std::endl;
}