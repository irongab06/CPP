/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:47:39 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:47:46 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
