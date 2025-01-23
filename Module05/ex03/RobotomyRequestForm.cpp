#include "RobotomyRequestForm.hpp"

RobottomyRequestForm::RobottomyRequestForm() : _target("Default")
{
	std::cout << "constructor RobottomyRequestForm Default" << std::endl;
}

RobottomyRequestForm::RobottomyRequestForm(std::string const& target) :
	AForm(target, 72, 45), _target(target)
{
	std::cout << "Constructor RobottomyRequestForm" << std::endl;
}

RobottomyRequestForm::~RobottomyRequestForm()
{
	std::cout << "Destructor RobottomyRequestForm" << std::endl;
}

RobottomyRequestForm::RobottomyRequestForm(RobottomyRequestForm const& copy) :
	AForm(copy), _target(copy._target)
{
	std::cout << "constructor copy RobottomyRequestForm" << std::endl;
}

RobottomyRequestForm&	RobottomyRequestForm::operator=(RobottomyRequestForm const& copy)
{
	if (this == &copy)
	{
		AForm::operator=(copy);
		this->_target = copy._target;
	}
	return (*this);
}

void	RobottomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << "Makes some drilling noises 🤖" << std::endl;
	srand(time(NULL));
	int	i = rand();
	if ((i % 2) == 0)
	{
		std::cout << REDCOLOR << executor.getName() << RESETCOLOR
			<< " is robotomized " << GREENCOLOR << "Success" << RESETCOLOR
			<< std::endl;
	}
	else
	{
		std::cout << REDCOLOR << executor.getName() << RESETCOLOR
		<< " is not robotomized " << REDCOLOR << "Fail" << RESETCOLOR
		<< std::endl;
	}
}
