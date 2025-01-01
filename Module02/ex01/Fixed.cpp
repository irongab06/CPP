#include "Fixed.hpp"

Fixed::Fixed() : value_fixe(0)
{
	std::cout << "Default constructor called"<<std::endl;
}

Fixed::Fixed(const int b)
{
	this->value_fixe = (b << _fixedPoint);
	std::cout<<"Int constructor called"<< std::endl;
}

Fixed::Fixed(const float c)
{
	this->value_fixe = roundf(c * (1 << _fixedPoint));
	std::cout<<"Float constructor called"<< std::endl;
}

Fixed::Fixed(Fixed const &b)
{
	std::cout << "Copy constructor called"<< std::endl;
	*this = b;

}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;	
}

float Fixed::toFloat( void ) const
{
	return 	((float)value_fixe / (1 << this->_fixedPoint));
}

int	Fixed::toInt(void) const
{
	return (value_fixe / (1 << this->_fixedPoint));
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return (os);
}

Fixed&	Fixed::operator=(Fixed const &rhs)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->value_fixe = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void)const
{
	return (this->value_fixe);
}

void	Fixed::setRawBits( int const raw)
{
	this->value_fixe = raw;
}