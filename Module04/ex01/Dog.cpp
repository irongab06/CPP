#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog : 🏗️"<< std::endl;
	this->_Brain = new Brain();
}

Dog:: Dog(Dog const& copy) : Animal(copy)
{
	std::cout << "Dog : Copy 🏗️" << std::endl;
    _Brain = new Brain(*copy._Brain);
}

void	Dog::makeSound()const
{
	std::cout << this->getType() <<" : Wouaff Wouaff"<<std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog : 🧨" << std::endl;
	delete this->_Brain;
}

Dog& Dog::operator=(Dog const& copy)
{
	 if (this != &copy) { // Éviter l'auto-affectation
        _type = copy.getType();

        if (_Brain) {
            delete _Brain; // Libérer l'ancienne mémoire
        }

        _Brain = new Brain(*copy._Brain); // Copie profonde
    }
    return (*this);
}
