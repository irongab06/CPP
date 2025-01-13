#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\033[31m------------Test create Bureaucrat high Grade---------\n\033[0m" << std::endl;
	try
	{
		Bureaucrat	Bureaucrat("Elon", -1);
		std::cout << Bureaucrat << "\n" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31mError \033[0m" <<e.what() << "\n" << std::endl;
	}
	std::cout << "\033[31m------------Test create Bureaucrat low Grade---------\n\033[0m" << std::endl;
	try
	{
		Bureaucrat	Bureaucrat("Elon", 151);
		std::cout << Bureaucrat << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31mError \033[0m" <<e.what() << "\n" << std::endl;
	}

	std::cout << "\033[31m--------------------Test up Grade--------------------\n\033[0m" << std::endl;
	
	try
	{
		Bureaucrat	Bureaucrat("Elon", 5);
		std::cout << Bureaucrat << std::endl;
		while (1)
		{
			Bureaucrat.setupgrade();
			std::cout << Bureaucrat << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31m\nError \033[0m" <<e.what() << "\n" << std::endl;
	}
		std::cout << "\033[31m--------------------Test down Grade--------------------\n\033[0m" << std::endl;
	
	try
	{
		Bureaucrat	Bureaucrat("Elon", 145);
		std::cout << Bureaucrat << std::endl;
		while (1)
		{
			Bureaucrat.setdowngrade();
			std::cout << Bureaucrat << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31m\nError \033[0m" <<e.what() << "\n" << std::endl;
	}
	std::cout << "\033[31m------------Test create Bureaucrat Good Grade---------\n\033[0m" << std::endl;
	try
	{
		Bureaucrat	Bureaucrat("Elon", 130);
		std::cout << Bureaucrat << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "\033[31m\nError \033[0m" <<e.what() << "\n" << std::endl;
	}
	std::cout << "\n\33[31m-------------------------------------------------------\033[0m"<< std::endl;
	return (0);
}