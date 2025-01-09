#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
	public:
		AMateria();
		virtual ~AMateria() = 0;
		AMateria(AMateria const& copy);
		AMateria&	operator=(AMateria const& copy);
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string	_type;
};

#endif