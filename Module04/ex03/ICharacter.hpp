#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "Character.hpp"

class ICharacter
{
	public:
		virtual	ICharacter() = 0;
		virtual ~ICharacter();
		virtual ICharacter(ICharacter const& copy) = 0;
		virtual	ICharacter&	operator=(ICharacter const& copy) = 0;
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif