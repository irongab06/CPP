#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const& copy) : AMateria(copy)
{
}

Cure&	Cure::operator=(Cure const& copy)
{
	this->_type = copy.getType();
	return (*this);
}

AMateria* Cure::clone() const
{
	Cure*	copy = new Cure();
	return (copy);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* shoots an "<< this->getType() << " bolt at " 
			<< target.getName() << " *"<< std::endl;
}