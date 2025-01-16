/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:47:00 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:47:01 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::string _ideas[] = {"eat", "drink", "sleep", "run", "game"};
	for (int i = 0; i < 100; i++)
		ideas[i] = _ideas[rand() % 5];
	std::cout << "Brain : 🏗️"<< std::endl;
	this->getFirstIdeas();
}

Brain::~Brain()
{
	std::cout << "Brain : 🧨"<< std::endl;
}

Brain::Brain(Brain const& copy)
{
	*this = copy;
}

Brain&	Brain::operator=(Brain const& copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}

void Brain::getFirstIdeas()const
{
	std::cout << "First ideas : " << this->ideas[0]<<" 🧠"<<"\n"<< std::endl;
}
