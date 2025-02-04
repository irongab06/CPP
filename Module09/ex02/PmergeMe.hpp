#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <utility>
#include <sstream>
#include <set>
#include <climits>
#include <cstdlib>
#include <stdexcept>
#include <algorithm>
#include <ctime>
#include <iomanip>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(std::string &list);
		~PmergeMe();
		template <typename T>
		PmergeMe(PmergeMe const& copy);
		PmergeMe&	operator=(PmergeMe const& copy);
		void	StartAlgo(std::string &list);

	private:
		std::vector<int>				v_sort;
		std::deque<int>					d_sort;
};

#endif
