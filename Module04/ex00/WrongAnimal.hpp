#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string const type);
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const& copy);
		WrongAnimal& operator=(WrongAnimal const& copy);
		std::string	getType(void)const;
		void	makeSound()const;
	protected:
		std::string	_type;
};

#endif
