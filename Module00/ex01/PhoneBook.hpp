/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 08:09:58 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/10 08:09:59 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include "Contact.hpp"
#include <string>
#include <iomanip>
#include <cstdlib>


class PhoneBook {
	private:
		Contact		contact[8];
		int			index_full;
	public:
		PhoneBook();
		~PhoneBook();
		void		add_contact();
		void		get_contact() const;
		void		get_one_contact() const;
		static void	get_byebye();
};

#endif