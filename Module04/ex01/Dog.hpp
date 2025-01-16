/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:45:19 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:45:20 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog const& copy);
		Dog&	operator=(Dog const& copy);
		virtual void	makeSound(void)const;
	private:
		Brain	*_Brain;
};

#endif
