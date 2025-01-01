#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <ostream>

class	Fixed
{
	public:

		Fixed();
		Fixed(const int b);
		Fixed(const float c);
		Fixed(Fixed const& d);
		~Fixed();

		const Fixed&	operator++();
		const Fixed		operator++(int);
		const Fixed&	operator--(void);
		const Fixed		operator--(int);
		Fixed			operator*(Fixed const& rhs)const;
		Fixed			operator+(Fixed const& rhs)const;
		Fixed			operator-(Fixed const& rhs)const;
		Fixed			operator/(Fixed const& rhs)const;
		int				getRawBtis(void) const;
		float			to_float(void) const;


	private:

		int					value_fixe;
		static const int	_fixedpoint = 8;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& b);

#endif