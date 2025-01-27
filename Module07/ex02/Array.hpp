/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 22:11:55 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/27 08:35:49 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# define REDCOLOR "\033[31m"
# define RESETCOLOR "\033[0m"

#include <string>
#include <iostream>
#include <ostream>
#include <stdexcept>
#include <iomanip>

template<typename T>
class Array
{
	public:
		Array() : tab(NULL), _size(0) {}
		Array(unsigned int n) : tab(NULL), _size(n) {
			this->tab  = new T[n];
			for (unsigned int i = 0; i < _size; i++)
				tab[i] = T();
		}
		Array(Array const& copy) : _size(copy._size), tab(NULL) { 
			this->tab  = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				this->tab[i] = copy.tab[i];
		}
		Array&	operator=(Array const& copy) {
			if (this == &copy)
				return (*this);
			delete [] this->tab;
			this->_size = copy._size;
			if (this->_size == 0) {
				this->tab = NULL;
				return (*this);
			}
			this->tab  = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				this->tab[i] = copy.tab[i];
			return (*this);
		}
		~Array() {
			 if(tab != NULL)
			 	delete []tab; 
		}
		T&	operator[](unsigned int i)  const{
			if (i >= _size)
				throw std::out_of_range("Error : out of rang");
			return (this->tab[i]);
		}
		unsigned int	size(void) const { return (this->_size); };
	private:
		T				*tab;
		unsigned int	_size;
};
template<typename T>
std::ostream&	operator<<(std::ostream& os, const Array<T>& array) {
	if (array.size() == 0)
		os << "array is empty";
	for (unsigned int i = 0; i < array.size() ; i++)
		os << array[i] << std::endl;
	return (os);
}
#endif
