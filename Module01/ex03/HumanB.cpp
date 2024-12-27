#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string name) : name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	
}

void	HumanB::attack()
{
	if (_weapon == NULL)
		std::cout << name << " has no weapon to attack " << std::endl;
	else
		std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
}