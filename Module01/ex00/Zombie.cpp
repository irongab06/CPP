#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std:: cout << _name << "is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << "is destroyed" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."<< std::endl; 
}
