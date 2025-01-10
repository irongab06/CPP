#include "Zombie.hpp"

int	main()
{
	Zombie*	horde = zombieHorde(10, "Ragnar");
	delete [] horde;
	return (0);
}
