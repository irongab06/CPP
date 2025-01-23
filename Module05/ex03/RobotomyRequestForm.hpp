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
