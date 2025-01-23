#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << REDCOLOR
	<<"\n---------Test Create Bureaucrat and Form -------------------\n" << RESETCOLOR
	<< std::endl;
	try
	{
		Bureaucrat	Bureaucrat("Elon", 10);
		std::cout << Bureaucrat << "\n" << std::endl;
		Form	Form("Projet Alpha", 10, 10);
		std::cout << Form << "\n" << std::endl;
		Bureaucrat.signForm(Form);
		Bureaucrat.signForm(Form);
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31mError \033[0m" <<e.what() << "\n" << std::endl;
	}
	std::cout << "\033[31m\n------------Test create Bureaucrat low Grade---------\n\033[0m" << std::endl;
	try
	{
		Bureaucrat	Bureaucrat("Elon", 150);
		std::cout << Bureaucrat << std::endl;
		Form	Form("Projet T-Rex", 30, 30);
		std::cout << Form << "\n" << std::endl;
		Bureaucrat.signForm(Form);
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31mError \033[0m" <<e.what() << "\n" << std::endl;
	}
	std::cout << "\033[31m\n----------------Test up Grade for sign-------------\n\033[0m"
		<< std::endl;
	try
	{
		Bureaucrat	Bureaucrat("Elon", 31);
		std::cout << Bureaucrat << std::endl;
		Form	Form("Projet T-Rex", 30, 30);
		std::cout << Form << "\n" << std::endl;
		Bureaucrat.signForm(Form);
		Bureaucrat.setupgrade();
		Bureaucrat.signForm(Form);
		std::cout << Form << "\n" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31mError \033[0m" <<e.what() << "\n" << std::endl;
	}
	return (0);
}
