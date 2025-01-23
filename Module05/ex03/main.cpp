#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << REDCOLOR << "\n-----Test Intern Form valid class robotomy ------------\n"
		<< RESETCOLOR << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << "Name : " <<rrf->getName() << std::endl;
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << REDCOLOR << "\n------------------Test Intern Form  not valid------------\n"
		<< RESETCOLOR << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* rr;
		rr = someRandomIntern.makeForm("robotomy requests", "Bender");
		std::cout <<rr->getName() << std::endl;
		delete rr;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << REDCOLOR << "\n------------------Test Intern Form class presidential------------\n"
		<< RESETCOLOR << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* rrp;
		rrp = someRandomIntern.makeForm("presidential pardon", "Gab");
		std::cout << "Name : " << rrp->getName() << std::endl;
		delete rrp;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << REDCOLOR << "\n------------------Test Intern Form not valid------------\n"
		<< RESETCOLOR << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* rrp;
		rrp = someRandomIntern.makeForm("presidential pardond", "Gab");
		std::cout << rrp->getName() << std::endl;
		delete rrp;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		std::cout << REDCOLOR << "\n------------------Test Intern Form class shrubbery------------\n"
		<< RESETCOLOR << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* rrp;
		rrp = someRandomIntern.makeForm("shrubbery creation", "stark");
		std::cout << "Name : " << rrp->getName() << std::endl;
		delete rrp;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << REDCOLOR << "\n------------------Test Intern Form not valid------------\n"
		<< RESETCOLOR << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* rrp;
		rrp = someRandomIntern.makeForm("shrubbery creationfd", "stark");
		std::cout << rrp->getName() << std::endl;
		delete rrp;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
