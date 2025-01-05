 #include "Animal.hpp"

Animal::Animal()
{
}

Animal::Animal(std::string type) : _type(type)
{
}

Animal::Animal(Animal const& copy)
{
	*this = copy;
}

Animal::~Animal()
{
}

Animal& Animal::operator=(Animal const& copy)
{
	this->_type = copy._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "I am not a dog or cat"<< std::endl;
}

std::string	Animal::getType(void)const
{
	return (this->_type);
}