#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : v_sort(), d_sort() {}

PmergeMe::PmergeMe(std::string &list)
{
	StartAlgo(list);
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const& copy) : v_sort(copy.v_sort), d_sort(copy.d_sort) {}

PmergeMe&	PmergeMe::operator=(PmergeMe const &copy) {
	if (this != &copy) {
		this->v_sort = copy.v_sort;	
		this->d_sort = copy.d_sort;
	}
	return  (*this);
}

void	PrintSort(std::string &list, std::vector<int> &v_sort)
{
	
	std::cout << "Before : " << list << std::endl;
	std::cout << std::endl;	
	std::cout << "After : ";
	for (size_t i = 0; i < v_sort.size(); i++) {
			std::cout << v_sort[i] << " ";
	}
	std::cout << std::endl;
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
static size_t	JacobInsert(size_t &index_1, size_t &index_2)
{
	size_t indice = 0;

	if (index_1 == 0) {
		index_1 = 1;
		return (0);
	}
	if (index_1 == 1 && index_2 == 0) {
		index_2 = 1;
		return (1);
	}
	indice = index_1 + (2 * index_2);
	index_2 = index_1;
	index_1 = indice;
	return (indice);
}

template <typename T, typename U>
void	MergeRecursive(T &sort, U &merge)
{
	U	temp = merge;
	bool	pair = true;

	merge.clear();
	for (size_t tab = 0; tab < temp.size(); tab++) {
		T	left, right;
		size_t midl = temp[tab].size() / 2;
		if (temp[tab].size() > 2) {
			for (size_t i = 0; i < midl; i++) { 
				left.push_back(temp[tab][i]); }
			for (size_t i = midl; i < temp[tab].size(); i++) { 
				right.push_back(temp[tab][i]); };
		}
		else {
			for (size_t i = 0; i < temp[tab].size(); i++) {
				left.push_back(temp[tab][i]);}
		}
		if (!left.empty())
			merge.push_back(left);
		if (!right.empty())
			merge.push_back(right);
		if (left.size() > 2 || right.size() > 2)
			pair = false;
	}
	if (!pair)
		MergeRecursive(sort, merge);
}

template <typename T, typename U>
void	MergeInsert(T &sort, U &pair)
{
	(void)pair;
	U	merge, db;
	T	single, right, left;

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
	else
		return ;
	MergeRecursive(sort, merge);
	sort.clear();
	typename T::iterator it;
	for (size_t i = 0; i < merge.size(); i++) {
		for (size_t j = 0; j < merge[i].size(); j++) {
			if (merge[i].size() == 2 && merge[i].front() > merge[i].back())
				std::swap(merge[i].front(), merge[i].back());
			it = std::lower_bound(sort.begin(), sort.end(), merge[i][j]);
			sort.insert(it, merge[i][j]);
		}
	}
}

template <typename T, typename U>
void	SeparatePair(T &sort, U &pair)
{
	T	db;
	sort.clear();
	for (size_t i = 0; i < pair.size(); i++) {
		if (pair[i].size() > 1) {
			sort.push_back(pair[i].back());
			pair[i].pop_back();
		}
	}
}

template <typename T, typename U>
static void	FordJohnson(T &sort, U &pair, std::string &list)
{
	size_t		i_1 = 0, i_2 = 0, size= 0, indice = 0;
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
	MergeInsert(sort, pair);
	typename T::iterator it;
	size = pair.size();
	indice = JacobInsert(i_1, i_2);
	while (indice < size) {
		it = std::lower_bound(sort.begin(), sort.end(), pair[indice][0]);
		sort.insert(it, pair[indice][0]);
		pair[indice][0] = -1;
		indice = JacobInsert(i_1, i_2);
	}
	for (size_t i = 0; i < pair.size(); i++) {
		if (pair[i][0] != -1) {
			it = std::lower_bound(sort.begin(), sort.end(), pair[i][0]);
			sort.insert(it, pair[i][0]);
		}
	}
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
	long	start, end, check_time;

	start = clock();
	CheckList(list);
	end = clock();

	check_time = end - start;
	std::deque<std::deque<int> >	d_pair;
	std::vector<std::vector<int> >	v_pair;
	start = clock();
	FordJohnson(v_sort, v_pair, list);
	end = clock();

	PrintSort(list, v_sort);
	std::cout << "Time to process a range of 3000 elements with std::vector "
		<<static_cast<double>((end - start) + check_time) / CLOCKS_PER_SEC
		<< " us" <<std::endl;
	start = clock();
	FordJohnson(d_sort, d_pair, list);
	end = clock();
	std::cout << "Time to process a range of 3000 elements with std::deque "
		<<static_cast<double>((end - start) + check_time) / CLOCKS_PER_SEC
		<< " us" <<std::endl;
}
