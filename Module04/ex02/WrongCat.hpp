#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(WrongCat const& copy);
		WrongCat&	operator=(WrongCat const& copy);
		void	makeSound(void)const;
};

#endif
