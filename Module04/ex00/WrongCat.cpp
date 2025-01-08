#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat : Constructor Default"<< std::endl; 
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : Destructor"<< std::endl;
}

WrongCat::WrongCat(WrongCat const& copy) : WrongAnimal(copy)
{
}

WrongCat&	WrongCat::operator=(WrongCat const& copy)
{
	this->_type = copy.getType();
	return (*this);
}

void	WrongCat::makeSound()const
{
	std::cout << "Wrong miaouuuuu"<< std::endl;
}
