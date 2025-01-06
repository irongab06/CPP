#include <iostream>
#include <string>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "constructor default Cat"<< std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat"<< std::endl;
}

Cat::Cat(Cat const& copy)
{
	*this = copy;
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() <<" : Miaou Miaou" <<std::endl;
}

Cat&	Cat::operator=(Cat const& copy)
{
	_type = copy.getType();
	return (*this);
}
