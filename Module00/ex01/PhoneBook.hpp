#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include "Contact.hpp"
#include <string>
#include <iomanip>
#include <cstdlib>


class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void		add_contact();
		void		get_contact() const;
		void		get_one_contact() const;
		static void	get_byebye();
	private:
		Contact		contact[8];
		int			index_full;
};

#endif