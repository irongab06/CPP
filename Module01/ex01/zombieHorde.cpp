#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i;

	i = 0;
	Zombie* horde = new Zombie[N];
	while (i < N)
	{
		horde[i].set_name(name);
		horde[i].get_name();
		i++;
	}
	i = 0;
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	return (horde);
}