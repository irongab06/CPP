/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:45:02 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:45:54 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
