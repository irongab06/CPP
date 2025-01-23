#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const& target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const& copy);
		PresidentialPardonForm&	operator=(PresidentialPardonForm const& copy);
		void  execute(Bureaucrat const &executor) const;
	private:
		std::string	_target;
};

#endif
