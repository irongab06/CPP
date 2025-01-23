#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <iterator>
#include <string>
#include <iostream>
#include <algorithm>
#include <stdexcept>


template<typename T>
void	easyfind(T &vec, int i) {
	typename T::iterator	it = std::find(vec.begin(), vec.end(), i);
	if (it == vec.end())
		std::cout << "\033[31mValue not found in vector\033[0m\n" << std::endl;
	else
		std::cout << "\033[32mvalue found in vector is : \033[0m" << *it << std::endl;
}

#endif
