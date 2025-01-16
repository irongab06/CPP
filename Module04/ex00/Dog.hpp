/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:44:00 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:44:02 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog const& copy);
		Dog&	operator=(Dog const& copy);
		virtual void	makeSound(void)const;
};

#endif
