#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : v_sort(), d_sort() {}

PmergeMe::PmergeMe(std::string &list)
{
	StartAlgo(list);
}

PmergeMe::~PmergeMe() {}

PmergeMe&	PmergeMe::operator=(PmergeMe const &copy) {
	this->v_sort = copy.v_sort;
	this->d_sort = copy.d_sort;
	return  (*this);
}


template <typename T, typename U>
static	void	SortByPair(T &sort, U &pair)
{
	T	db;

	while (sort.size() != 0)
	{
		if (sort.size() >= 2) {
			db.push_back(sort.back());
			sort.pop_back();
			db.push_back(sort.back());
			sort.pop_back();
			if (*std::min_element(db.begin(), db.end()) == db.back())
				std::swap(db.front(), db.back());
			pair.push_back(db);
			db.clear();
		}
		if (sort.size() == 1) {
			db.push_back(sort.back());
			sort.pop_back();
			pair.push_back(db);
			db.clear();
		}
	}
	sort.clear();
}
	// template <typename T, typename U>
	// static void	JacobInsert(T &sort, U &pair)
	// {
		
	// }

template <typename T, typename U>
void	MergeRecursive(T &sort, U &merge)
{
	U	temp;
	T	left;
	T	right;
	size_t midl = merge.size() / 2;
	int	tab = 0;

	(void)sort;
	temp = merge;
	merge.clear();
	while (!temp.empty())
	{
		midl = temp[tab].size(); 
		for (size_t i = 0; i < midl; i++) {
			left.push_back(temp[tab][i]);
		}
		for (size_t i = midl; i < temp[tab].size(); i++) {
			right.push_back(temp[tab][i]);
		}
		merge.push_back(left);
		merge.push_back(right);
		left.clear();
		right.clear();
		temp.erase(temp.begin());
	}	
	
	midl = merge.size() / 2;
	temp = merge;
	merge.clear();
	

	while (!temp.empty())
	{
		midl = temp[tab].size(); 
		for (size_t i = 0; i < midl; i++) {
			left.push_back(temp[tab][i]);
		}
		for (size_t i = midl; i < temp[tab].size(); i++) {
			right.push_back(temp[tab][i]);
		}
		merge.push_back(left);
		merge.push_back(right);
		left.clear();
		right.clear();
		temp.erase(temp.begin());
	}
}

template <typename T, typename U>
void	Merge(T &sort, U &pair)
{
	(void)pair;
	U	merge;
	U	db;
	T	single;
	T	right;
	T	left;
	std::vector<int>::iterator it = sort.begin();
	for (; it != sort.end(); it++) {
			std::cout << *it << " ";
	}
	std::cout << std::endl;
	size_t midl = sort.size() / 2;
	if (sort.size() >= 2) {
		for (size_t i = 0; i < midl; i++)
			left.push_back(sort[i]);
		for (size_t i = midl; i < sort.size(); i++)
			right.push_back(sort[i]);
		merge.push_back(right);
		merge.push_back(left);
		right.clear();
		left.clear();
	}
	sort.clear();
	if (merge.size() == 2) {
		if (merge[0] > merge[1]) {
			sort.push_back(merge[1][0]);
			sort.push_back(merge[0][0]);
			return ;
		}
	}
	MergeRecursive(sort, merge);

	std::cout << "###########################################################" << std::endl;
	size_t e = 0;
	for (size_t i = 0; i < merge.size(); i++)
	{
		while (e < merge[i].size())
		{
			std::cout << merge[i][e];
			std::cout << " ";
			e++;
		}
	std::cout << std::endl;
		e = 0;
	}
	std::cout << "test-----------------	------" <<std::endl;
	// std::cout<< std::endl;


	// size_t j = 0;
	// for (size_t i = 0; i < db.size(); i++)
	// {
	// 	while (j < db[i].size())
	// 	{
	// 		std::cout << " " <<db[i][j];
	// 		std::cout << " ";
	// 		j++;
	// 	}
	// 	std::cout << std::endl;
	// 	j = 0;
	// }

	// std::vector<int>::iterator ite = single.begin();
	// for (int i = 0; ite != single.end(); ite++, i++) {
	// 		std::cout << *ite << " ";
	// }
}

template <typename T, typename U>
void	SeparatePair(T &sort, U &pair)
{
	T	db;
	sort.clear();
	for (size_t i = 0; i < pair.size(); i++) {
			sort.push_back(pair[i].back());
			pair[i].pop_back();
	}
}

template <typename T, typename U>
static void	FordJohnson(T &sort, U &pair, std::string &list)
{
	long		nbr1 = 0;
	char		*end = 0;
	std::string	value;

	std::istringstream	iss(list);
	while (iss >> value) {
		nbr1 = std::strtol(value.c_str(), &end, 10);
		sort.push_back(nbr1);
	}
	SortByPair(sort, pair);
	SeparatePair(sort, pair);
	Merge(sort, pair);
	//JacobInsert(sort, pair);
}

static void	CheckList(std::string &list)
{
	bool	hasdigit = false;
	for (size_t i = 0; i < list.size(); i++) {
		if ((list[i] < '0' || list[i] > '9' )&& list[i] != ' ')
			throw std::runtime_error("Error : Caractere not valid");
		if (hasdigit != true && list[i] >= '0' && list[i] <= '9')
			hasdigit = true;
	}
	if (!hasdigit)
		throw std::runtime_error("Error : No numeric characters");

	std::string			token;
	std::set<long>		s_value;
	char				*end = 0;
	long				value = 0;

	std::istringstream	iss(list);
	while(iss >> token) {
		value = std::strtol(token.c_str(), &end, 10);
		if (*end != '\0' || value > INT_MAX || value < 0)
			throw std::runtime_error("Error : Value greater than an INT MAX");
		if (!s_value.insert(value).second)
			throw std::runtime_error("Error : Doublon Number");
	}
}

void	PmergeMe::StartAlgo(std::string &list)
{
	CheckList(list);
	std::deque<std::deque<int> >	d_pair;
	std::vector<std::vector<int> >	v_pair;
	FordJohnson(v_sort, v_pair, list);
	//FordJohnson(d_sort, d_pair, list);

	// size_t	j = 0;

	// std::cout << "Vector" << std::endl;
	// for (size_t i = 0; i < v_pair.size(); i++)
	// {
	// 	while (j < v_pair[i].size())
	// 	{
	// 		std::cout << v_pair[i][j];
	// 		std::cout << " ";
	// 		j++;
	// 	}
	// 	std::cout << "\n" << std::endl;
	// 	j = 0;
	// }
	
	// std::vector<int>::iterator it = v_sort.begin();
	// for (int i = 0; it != v_sort.end(); it++, i++) {
	// 	std::cout << *it << " ";
	// }
	// std::cout << std::endl;
}
