#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Brain
{
	public:
		Brain();
		virtual~Brain();
		Brain(Brain const& copy);
		Brain&	operator=(Brain const& copy);
		void	getFirstIdeas()const;

	private:
		std::string	ideas[100];
};

#endif