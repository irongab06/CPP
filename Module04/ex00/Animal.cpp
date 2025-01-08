 #include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal : Constructor default"<< std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal : Constructor Type : "<< type << std::endl;
}

Animal::Animal(Animal const& copy)
{
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal : Destructor"<< std::endl;
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
