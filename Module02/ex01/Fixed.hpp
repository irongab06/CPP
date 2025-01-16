/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:43:03 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 09:43:08 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Fixed(Fixed const & b);
		Fixed&	operator=(Fixed const &rhs);
		~Fixed();
		int	getRawBits(void)const;
		void	setRawBits( int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int					value_fixe;
		static const int	_fixedPoint = 8;
};

std::ostream& operator<<(std::ostream&, const Fixed& f);

#endif
