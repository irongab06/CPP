#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
}

Dog:: Dog(Dog const& copy)
{
	*this = copy;
}

void	Dog::makeSound()const
{
	std::cout << "Wouaff Wouaff"<<std::endl;
}

Dog::~Dog()
{
}

Dog& Dog::operator=(Dog const& copy)
{
	_type = copy.getType();
	return (*this);
}

