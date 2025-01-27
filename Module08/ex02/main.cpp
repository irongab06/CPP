/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:43:06 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/27 11:47:42 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "\033[31m----------------test sujet stack----------------\033[0m"<< std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout <<mstack.top() << std::endl;
	mstack.pop();
	std::cout <<mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\033[31m----------------test sujet list----------------\033[0m"<< std::endl;
	std::list<int> mslist;
	mslist.push_back(5);
	mslist.push_back(17);
	std::cout << mslist.back() << std::endl;
	mslist.pop_back();
	std::cout << mslist.size() << std::endl;
	mslist.push_back(3);
	mslist.push_back(5);
	mslist.push_back(737);
	//[...]
	mslist.push_back(0);
	std::list<int>::iterator lt = mslist.begin();
	std::list<int>::iterator lte = mslist.end();
	++lt;
	--lt;
	while (lt != lte)
	{
	std::cout << *lt << std::endl;
	++lt;
	}
	std::list<int> l(mslist);
return 0;
}
