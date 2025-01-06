#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "cosntructor default Dog"<< std::endl;
}

Dog:: Dog(Dog const& copy)
{
	*this = copy;
}

void	Dog::makeSound()const
{
	std::cout << this->getType() <<" : Wouaff Wouaff"<<std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
}

Dog& Dog::operator=(Dog const& copy)
{
	_type = copy.getType();
	return (*this);
}

