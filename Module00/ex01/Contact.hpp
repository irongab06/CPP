/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 08:09:44 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/10 08:09:44 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cctype>
#include <iomanip>

class Contact {

	private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string darkest_secret;
	bool	n;
	public:

	Contact();
	~Contact();
	int	user(void) const;
	void	new_user();
	void	set_user(const std::string &prompt, std::string &info_user);
	void	get_all_user(int i) const;
	void	get_print_contact() const;
	std::string	ft_point(std::string str)const;

};

#endif