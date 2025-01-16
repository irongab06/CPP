/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:39:44 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:39:47 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const name);
		~FragTrap();
		FragTrap(FragTrap const& copy);
		FragTrap&	operator=(FragTrap const& copy);
		void highFivesGuys(void);
};

#endif
