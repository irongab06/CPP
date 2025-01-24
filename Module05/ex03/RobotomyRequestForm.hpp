/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:53:07 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/24 13:53:11 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobottomyRequestForm : public AForm
{
	public:
		RobottomyRequestForm();
		RobottomyRequestForm(std::string const& target);
		~RobottomyRequestForm();
		RobottomyRequestForm(RobottomyRequestForm const& copy);
		RobottomyRequestForm&	operator=(RobottomyRequestForm const& copy);
		void  execute(Bureaucrat const &executor) const;
	private:
		std::string	_target;
};
#endif
