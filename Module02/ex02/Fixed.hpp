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

		Fixed&				operator++();
		const Fixed			operator++(int);
		Fixed&				operator--(void);
		const Fixed			operator--(int);
		Fixed				operator*(Fixed const& rhs)const;
		Fixed				operator+(Fixed const& rhs)const;
		Fixed				operator-(Fixed const& rhs)const;
		Fixed				operator/(Fixed const& rhs)const;
		bool				operator>(Fixed const& rhs)const;
		bool				operator<(Fixed const& rhs)const;
		bool				operator>=(Fixed const& rhs)const;
		bool				operator<=(Fixed const& rhs)const;
		bool				operator==(Fixed const& rhs)const;
		bool				operator!=(Fixed const& rhs)const;
		static Fixed		&min(Fixed& a, Fixed& b);
		static const Fixed	&min(const Fixed& a,const Fixed& b);
		static Fixed		&max(Fixed& a, Fixed& b);
		static const Fixed	&max(const Fixed& a,const Fixed& b);
		int					getRawBtis(void) const;
		float				to_float(void) const;


	private:

		int					value_fixe;
		static const int	_fixedpoint = 8;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& b);

#endif