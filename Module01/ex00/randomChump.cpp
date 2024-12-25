#include "Zombie.hpp"

void randomChump( std::string name)
{
	Zombie	Ragnar = Zombie(name);
	Ragnar.announce();
}