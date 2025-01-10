#include "Zombie.hpp"

int	main()
{
	Zombie*	Bjorn = newZombie("Bjorn ");
	Bjorn->announce();
	randomChump("Ragnar ");
	delete Bjorn;
	return (0);
}
