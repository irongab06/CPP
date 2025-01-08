#include <iostream>
#include <string>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat : 🏗️"<< std::endl;
	this->_Brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat : 🧨"<< std::endl;
	delete this->_Brain;
}

Cat::Cat(Cat const& copy) : Animal(copy)
{
	std::cout << "Cat : Copy 🏗️" << std::endl;
	_Brain = new Brain(*copy._Brain);
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() <<" : Miaou Miaou" <<std::endl;
}

Cat&	Cat::operator=(Cat const& copy)
{
	_type = copy.getType();
	_Brain = new Brain(*copy._Brain);
	return (*this);
}
