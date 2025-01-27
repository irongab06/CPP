/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:43:11 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/27 11:47:44 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <deque>
#include <stack>
#include <iterator>
#include <vector>
#include <list>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
	public:
	MutantStack () : std::stack<T, container>(){};
	~MutantStack() {}
	MutantStack(MutantStack const& copy) : std::stack<T, container>(copy){}
	MutantStack&	operator=(MutantStack const& copy) {
		if (this != &copy)
			std::stack<T, container>::operator=(copy);
		return (*this);
	}
	typedef typename container::iterator iterator;
	iterator begin()  {return (this->c.begin()); }
	iterator end()  {return (this->c.end()); }
};
#endif
