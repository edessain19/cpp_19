
# include "PresidentialPardonForm.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
: Form("PresidentialPardonForm", 25, 5), _target(target) {}

// COPY
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy)
: Form("PresidentialPardonForm", 25, 5), _target(copy.getTarget()) {}

/*
** DESTRUCTOR
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

/*
** MEMBER FUNCTIONS
*/

std::string const &PresidentialPardonForm::getTarget() const
{
  return _target;
}

void PresidentialPardonForm::Action() const
{
  std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}