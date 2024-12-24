#include "Contact.hpp"

void	Contact::get_print_contact() const
{
	std::cout << "\033[32m ├─────────────────┤\033[0m\n";
	std::cout << "\033[32m │ FIRST NAME      │"<< this->first_name<<"\n\033[0m";
	std::cout << "\033[32m │ LAST NAME       │"<< this->last_name<<"\n\033[0m";
	std::cout << "\033[32m │ NICKNAME        │"<< this->nickname<<"\n\033[0m";
	std::cout << "\033[32m │ PHONE NUMBER    │"<< this->phone_number<<"\n\033[0m";
	std::cout << "\033[32m │ DARKNEST SECRET │"<< this->darkest_secret<<"\n\033[0m";
	std::cout << "\033[32m ├─────────────────┤\033[0m\n";
}

void	Contact::new_user()
{
	std::cout << "\033[32m ├─────────────────┴────────────────┐\033[0m" << std::endl;
	std::cout << "\033[32m │           New Contact            │\033[0m" << std::endl;
	std::cout << "\033[32m ├─────────────────┬────────────────┘\033[32m" << std::endl;
	set_user("\033[32m │ FIRST NAME      │ \033[0m", this->first_name);
	set_user("\033[32m │ LAST NAME       │ \033[0m", this->last_name);
	set_user("\033[32m │ NICKNAME        │ \033[0m", this->nickname);
	set_user("\033[32m │ PHONE NUMBER    │ \033[0m", this->phone_number);
	set_user("\033[32m │ DARKNEST SECRET │ \033[0m", this->darkest_secret);
	if (std::cin.eof()!= 1)
	{
		std::cout << "\033[32m ├─────────────────┴────────────────┐\033[0m" << std::endl;
		std::cout << "\033[32m │              Succes !            │\033[0m" << std::endl;
		std::cout << "\033[32m ├─────────────────┬────────────────┘\033[32m" << std::endl;
	}
	n = true;
}

std::string Contact::ft_point(std::string str)const
{
	if (str.size() == 9)
	{
		std::string	temp = str + ".";
		return (temp);
	}
	return (str);
}
