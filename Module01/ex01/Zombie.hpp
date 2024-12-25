#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:

		Zombie();
		~Zombie();
		void	announce(void) const;
		void	set_name(std::string name);
		void	get_name()const;
	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif