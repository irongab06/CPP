/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:40:08 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/24 13:40:17 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	std::cout << REDCOLOR << "\n------------------Test Shrubbery-------------\n" 
		<< RESETCOLOR << std::endl;
	try
	{
		Bureaucrat	john("John", 10); // Grade 10
		ShrubberyCreationForm form("garden");
		std::cout << form << "\n" << std::endl;
        john.executeForm(form);
		john.signForm(form);
		std::cout << form << "\n" << std::endl;
		john.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << REDCOLOR << "\n------------------Test Presidential-------------\n"
		<< RESETCOLOR << std::endl;

	try
	{
		Bureaucrat	Gabriel("Gabriel", 1);
		PresidentialPardonForm	form_elon("elon");
		std::cout << form_elon << "\n" << std::endl;
		Gabriel.executeForm(form_elon);
		Gabriel.signForm(form_elon);
		std::cout << form_elon << "\n" << std::endl;
		Gabriel.executeForm(form_elon);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << REDCOLOR << "\n------------------Test Robotomy------------\n"
		<< RESETCOLOR << std::endl;
	try
	{
		Bureaucrat	Elon("Elon", 5);
		RobottomyRequestForm Jeff("Jeff");
		std::cout << Jeff << std::endl;
		Elon.executeForm(Jeff);
		Elon.signForm(Jeff);
		std::cout << Jeff << std::endl;
		Elon.executeForm(Jeff);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << REDCOLOR << "\n------------------Test Low Grade------------\n"
		<< RESETCOLOR << std::endl;
	try
	{
		Bureaucrat	Ironman("Ironman", 150);
		ShrubberyCreationForm	spiderman("spiderman");
		PresidentialPardonForm	Hulk("Hulk");
		RobottomyRequestForm	loki("loki");
		std::cout << spiderman << std::endl;
		std::cout << Hulk << std::endl;
		std::cout << loki << std::endl;
		Ironman.signForm(spiderman);
		Ironman.executeForm(spiderman);
		Ironman.signForm(Hulk);
		Ironman.executeForm(Hulk);
		Ironman.signForm(loki);
		Ironman.executeForm(loki);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
