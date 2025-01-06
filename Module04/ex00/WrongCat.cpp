#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "constructor default : WrongCat"<< std::endl; 
}

WrongCat::~WrongCat()
{
	std::cout << "destructor WrongCat"<< std::endl;
}

WrongCat::WrongCat(WrongCat const& copy)
{
	*this = copy;
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
