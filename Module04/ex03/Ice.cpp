#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const& copy) : AMateria(copy)
{
}

Ice&	Ice::operator=(Ice const& copy)
{
	this->_type = copy.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	Ice*	clone = new Ice();
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an "<< this->getType() << " bolt at " 
			<< target.getName() << " *"<< std::endl;
}
