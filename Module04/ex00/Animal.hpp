/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:43:33 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:43:33 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(Animal const& copy);
		Animal& operator=(Animal const& copy);
		virtual void	makeSound(void)const;
		std::string	getType()const;
	protected:
		std::string _type;
};
#endif
