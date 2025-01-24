/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:38:45 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/24 13:38:45 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <ostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const& copy);
		Bureaucrat&	operator=(Bureaucrat const& copy);
		const std::string&	getName()const;
		int	getGrade()const;
		void	setupgrade();
		void	setdowngrade();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high!");
				} 
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low!");
				} 
		};
	private:
		const std::string	_name;
		int	_grade;
};
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& f);

#endif
