/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:35:33 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:35:33 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const& copy);
		~ScavTrap();
		ScavTrap&	operator=(ScavTrap const& copy);
		void	attack(std::string const& target);
		void guardGate(void);
};

#endif
