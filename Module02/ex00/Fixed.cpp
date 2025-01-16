/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:32:14 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 09:32:16 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_n = 0;
	std::cout <<"Default constructor called"<<std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout <<"Destructor called"<< std::endl;
}
int	Fixed::getRawBits(void)const
{
	std::cout <<"getRawBits member function called"<< std::endl;
	return (this->_n);
}

void	Fixed::setRawBits( int const raw)
{
	std::cout <<"setRawBits member function called"<< std::endl;
	this->_n = raw;
}

Fixed&	Fixed::operator=(Fixed const &rhs)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->_n = rhs.getRawBits();
	return (*this);
}
