#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* bjorn = new Zombie(name);
	return (bjorn);
}
