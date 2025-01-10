#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class IMateriaSource
{
	public:
		virtual	IMateriaSource() = 0;
		virtual ~IMateriaSource();
		virtual	IMateriaSource(IMateriaSource const& copy) = 0;
		virtual IMateriaSource&	operator=(IMateriaSource const& copy) = 0;
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif