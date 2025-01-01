#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();
		Fixed&	operator=(Fixed const &rhs);
		int 	getRawBits(void) const;
		void 	setRawBits( int const raw);
		
	private:
		int					_n;
		static const int	_fixedPoint = 8;
};


#endif