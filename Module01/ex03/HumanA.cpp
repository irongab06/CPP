#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string name, Weapon& Weapon) : name(name), _weapon(Weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout <<this->name<<" attacks with their "<<_weapon.getType()<< std::endl;
}
