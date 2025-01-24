/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:53:18 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/24 13:53:21 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const& target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const& copy);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& copy);
		void execute(Bureaucrat const &executor) const;
	private:
		std::string	_target;
};

#endif
