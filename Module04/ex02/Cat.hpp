/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:47:13 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:47:14 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <cstdlib>

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(Cat const& copy);
		Cat&	operator=(Cat const& cat);
		virtual void	makeSound(void)const;
	private:
		Brain	*_Brain;
};

#endif
