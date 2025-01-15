#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << REDCOLOR << "\n------------------Test Intern------------\n"
		<< RESETCOLOR << std::endl;
	try
	{
		Intern someRandomIntern;
    	AForm* rrf;
    	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}		
	return (0);
}