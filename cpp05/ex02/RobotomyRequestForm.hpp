#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <time.h> // time
# include <iostream>
# include <string>

# include <stdlib.h> // srand, rand

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const& copy);
		~RobotomyRequestForm();

		void Action() const;
		std::string const &getTarget() const;

	private:
	std::string const _target;

};

#endif
