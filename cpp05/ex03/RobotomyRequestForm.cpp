
# include "RobotomyRequestForm.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
: Form("RobotomyRequestForm", 72, 45), _target(target) {}

// COPY
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy)
: Form("RobotomyRequestForm", 72, 45), _target(copy.getTarget()) {}

/*
** DESTRUCTOR
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

/*
** MEMBER FUNCTIONS
*/

std::string const &RobotomyRequestForm::getTarget() const
{
	return _target;
}

void RobotomyRequestForm::Action() const
{
	int i;

	srand(time(NULL)); // initialize random seed, otherwise not random
	i = rand() % 2;  //generate a number between 0 and 1
	std::cout << "Drill... DRill... DRIll... DRILl... DRILL... DRILL!" << std::endl;
	if (i)
    	std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << " failure, has not been robotomized" << std::endl;
}