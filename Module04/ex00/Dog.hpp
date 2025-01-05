#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog const& copy);
		Dog&	operator=(Dog const& copy);
		virtual void	makeSound(void)const;
};

#endif