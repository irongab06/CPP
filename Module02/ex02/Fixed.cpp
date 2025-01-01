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
float Fixed::to_float(void) const
{
	return ((float)this->value_fixe / (1 << this->_fixedpoint));
}

const Fixed& Fixed::operator++(void)
{
	value_fixe++;
	return (*this);
}

const Fixed& Fixed::operator--(void)
{
	value_fixe--;
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


int	Fixed::getRawBtis(void) const
{
	return (this->value_fixe);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& b)
{
	os << b.to_float();
	return (os);
}



