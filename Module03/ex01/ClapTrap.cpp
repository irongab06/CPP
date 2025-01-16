/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:34:31 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:34:43 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::~ClapTrap()
{
	std::cout << "\nClaptrap Destructor Called" << std::endl;
	std::cout <<"\nName : \033[31m"<<_name<<
		"\033[0m\nHP : \033[33m"<<_hit_points<<
		"\033[0m\nEnergie point : \033[33m"<<_energie_points<<
		"\033[0m\nAttack Damage : \033[33m"<<_attack_damage<<"\033[0m\n"<< std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10),
		_energie_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Constructor Called "<<"\nName : \033[31m"<<_name<<
		"\033[0m\nHP : \033[33m"<<_hit_points<<
		"\033[0m\nEnergie point : \033[33m"<<_energie_points<<
		"\033[0m\nAttack Damage : \033[33m"<<_attack_damage<<"\033[0m\n"<< std::endl;
}

ClapTrap::ClapTrap(std::string const name, int Hp, int Ep, int Ad) : _name(name),
		_hit_points(Hp), _energie_points(Ep), _attack_damage(Ad)
{
	std::cout << "ClapTrap Constructor Called "<<"\nName : \033[31m"<<_name<<
		"\033[0m\nHP : \033[33m"<<_hit_points<<
		"\033[0m\nEnergie point : \033[33m"<<_energie_points<<
		"\033[0m\nAttack Damage : \033[33m"<<_attack_damage<<"\033[0m\n"<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& copy)
{
	*this = copy;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hit_points = copy._hit_points;
		this->_energie_points = copy._energie_points;
		this->_attack_damage = copy._attack_damage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->getEp() != 0 && this->getHp() != 0)
	{
		std::cout <<"ClapTrap \033[31m"<<this->_name<<"\033[0m attacks \033[31m"
				<<target<<"\033[0m, causing \033[33m"<<this->_attack_damage
				<<"\033[0m points of damage!"<<std::endl;
		this->_energie_points--;
	}
	if (this->getHp() == 0)
	{
		std::cout <<"ClapTrap \033[31m"<<this->_name<<"\033[0m Has no more HP"
			<< std::endl;
		return ;
	}
	if (this->getEp() == 0)
		std::cout <<"ClapTrap \033[31m"<<this->_name<<"\033[0m has no more energy"
			<< std::endl; 
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int i;

	i = 0;
	std::cout <<"ClapTrap \033[31m"<<this->_name<<"\033[0m take "
		<< amount <<" points damage"<< std::endl; 
	while (this->_hit_points > 0 && i < amount)
	{
		this->_hit_points--;
		i++;
	}
	if (this->_hit_points == 0)
	{
		std::cout <<"ClapTrap \033[31m"<<this->_name<<"\033[0m is Dead"
			<< std::endl; 
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	i;

	i = 0;
	std::cout <<"ClapTrap \033[31m"<<this->_name<<"\033[0m repairs itself."
		<< std::endl;
	while (this->getEp() > 0 && this->getHp() > 0
			&& this->getHp() <= 10 && i < amount)
	{
		this->_energie_points--;
		this->_hit_points++;
		std::cout <<"ClapTrap \033[31m"<<this->_name<<"\033[0m HP up \033[33m"
			<<this->_hit_points<<"\033[0m"<< std::endl;
		i++;
	}
	std::cout<<""<<std::endl;
	if (this->getHp() == 0)
	{
		std::cout <<"ClapTrap \033[31m"<<this->_name<<"\033[0m Has no more HP"
			<< std::endl;
		return ;
	}
	if (this->getEp() == 0)
		std::cout <<"ClapTrap \033[31m"<<this->_name<<"\033[0m has no more energy"
			<< std::endl; 
}

std::string const&	ClapTrap::getName()const
{
	return (this->_name);
}

const unsigned int&	ClapTrap::getEp()const
{
	return (this->_energie_points);
}

const unsigned int&	ClapTrap::getHp()const
{
	return (this->_hit_points);
}
