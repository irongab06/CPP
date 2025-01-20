/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:23:04 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/20 13:23:05 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
	std::cout << "Destructor Base " << std::endl;
}

Base* generate(void)
{
	Base*	base = NULL;
	int	i = 0;
	srand(time(NULL));
	i = rand() % 4;
	switch (i)
	{
		case 0:
			base = new A();
			break ;
		case 1:
			base = new B();
			break ;
		case 2:
			base = new C();
			break ;
		case 3:
			break ;
	}
	return (base);
}

void identify(Base* p)
{
	if (p == NULL)
		std::cout << "Pointer is NULL" << std::endl;
	else if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Type A " << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Type B " << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Type C " << std::endl;
	else
		std::cout << "Type Unknown " << std::endl;
}

void identify(Base& p)
{
	try {
		dynamic_cast<A&>(p);
		std::cout << "Type Ref A" << std::endl;
	}
	catch(const std::exception&) {
		try {
			dynamic_cast<B&>(p);
			std::cout << "Type Ref B" << std::endl;
		}
		catch(const std::exception&) {
			try {
				dynamic_cast<C&>(p);
				std::cout << "Type Ref C" << std::endl;
			}
			catch(const std::exception&) {
				std::cout<< "Type Ref Unknown (Bad Cast)" << std::endl;
			}
		}
	}
}
