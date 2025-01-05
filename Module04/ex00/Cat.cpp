#include <iostream>
#include <string>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
}

Cat::~Cat()
{
}

Cat::Cat(Cat const& copy)
{
	*this = copy;
}

void	Cat::makeSound(void)const
{
	std::cout << "Miaou Miaou" <<std::endl;
}

Cat&	Cat::operator=(Cat const& copy)
{
	_type = copy.getType();
	return (*this);
}