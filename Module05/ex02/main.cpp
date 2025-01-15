#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int	main(void)
{
	// std::cout << REDCOLOR
	// <<"\n---------Test Create Bureaucrat and Form -------------------\n" << RESETCOLOR
	// << std::endl;
	// try
	// {
	// 	Bureaucrat	Bureaucrat("Elon", 10);
	// 	std::cout << Bureaucrat << "\n" << std::endl;
	// 	ShrubberyCreationForm ShrubberyCreationForm("Projet gotham");
	// 	std::cout << AForm << "\n" << std::endl;
	// 	Bureaucrat.signForm(AForm);
	// 	Bureaucrat.signForm(AForm);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cerr << "\033[31mError \033[0m" <<e.what() << "\n" << std::endl;
	// }
	// return (0);

	 try
    {
        // Instancier un bureaucrate
        Bureaucrat john("John", 10); // Grade 10

        // Instancier un formulaire concret
        ShrubberyCreationForm form("garden");

        // Afficher les informations du formulaire (si l'opérateur << est surchargé)
        std::cout << form << "\n" << std::endl;

        // Le bureaucrate signe le formulaire
        john.signForm(form);

        // Exécuter le formulaire
        john.executeForm(form);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
	return (0);
}