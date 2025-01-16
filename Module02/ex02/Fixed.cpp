/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:20:22 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:20:26 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value_fixe(0)
{
}
Fixed::Fixed(const int b)
{
	this->value_fixe = b << _fixedpoint;
}

Fixed::Fixed(const float c)
{
	this->value_fixe = roundf(c * (1 << _fixedpoint));
}

Fixed::Fixed(Fixed const& d)
{
	*this = d;
}

Fixed::~Fixed()
{
}

Fixed&	Fixed::operator=(Fixed const& copy)
{
	this->value_fixe = copy.getRawBtis();
	return (*this);
}

float Fixed::to_float(void) const
{
	return ((float)this->value_fixe / (1 << this->_fixedpoint));
}

//-------------Increment operation and Decrement operation-------------------

Fixed& Fixed::operator++(void)
{
	if ((float)this->value_fixe / (1 << _fixedpoint) < 1)
		value_fixe++;
	else
		this->value_fixe += (1 << _fixedpoint);
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	if ((float)this->value_fixe / (1 << _fixedpoint) < 1)
		value_fixe--;
	else
		this->value_fixe -= (1 << _fixedpoint);
	return (*this);
}

const Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++*this;
	return (temp);	
}

const Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--*this;
	return (temp);
}

//-----------------Addition Subtraction Division and Mutiplication---------------

Fixed Fixed::operator*(Fixed const& rhs)const
{
	Fixed	temp;
	temp.value_fixe = (this->value_fixe * rhs.getRawBtis()) >> _fixedpoint;
	return (temp);
}

Fixed Fixed::operator+(Fixed const& rhs)const
{
	Fixed	temp;
	temp.value_fixe = this->value_fixe + rhs.getRawBtis();
	return (temp);
}

Fixed Fixed::operator-(Fixed const& rhs)const
{
	Fixed	temp;
	temp.value_fixe = this->value_fixe - rhs.getRawBtis();
	return (temp);
}

Fixed Fixed::operator/(Fixed const& rhs)const
{
	Fixed	temp;
	temp.value_fixe = (this->value_fixe << _fixedpoint) / rhs.getRawBtis();
	return (temp);
}

//------------------------------comparison---------------------------------

bool Fixed::operator>(Fixed const& rhs)const
{
	return (this->value_fixe > rhs.getRawBtis());
}

bool Fixed::operator<(Fixed const& rhs)const
{
	return (this->value_fixe < rhs.getRawBtis());
}

bool Fixed::operator>=(Fixed const& rhs)const
{
	return (this->value_fixe >= rhs.getRawBtis());
}

bool Fixed::operator<=(Fixed const& rhs)const
{
	return (this->value_fixe <= rhs.getRawBtis());
}

bool Fixed::operator==(Fixed const& rhs)const
{
	return (this->value_fixe == rhs.getRawBtis());
}

bool Fixed::operator!=(Fixed const& rhs)const
{
	return (this->value_fixe != rhs.getRawBtis());
}

int	Fixed::getRawBtis(void) const
{
	return (this->value_fixe);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& b)
{
	os << b.to_float();
	return (os);
}

//-------------------------fonction min max--------------------------------

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBtis() < b.getRawBtis())
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::min(const Fixed& a,const Fixed& b)
{
	if (a.getRawBtis() < b.getRawBtis())
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBtis() > b.getRawBtis())
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::max(const Fixed& a,const Fixed& b)
{
	if (a.getRawBtis() > b.getRawBtis())
		return (a);
	else
		return (b);
}
