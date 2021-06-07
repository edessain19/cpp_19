
# include "Intern.hpp"

/*
** CONSTRUCTORS / DESTRUCTOR
*/

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern& Intern::operator = (const Intern &copy)
{
  (void)copy;
  return *this;
}

Form *makePresidentialForm(std::string const &form_target)
{
  return (new PresidentialPardonForm(form_target));
}

Form *makeRobotomyRequestForm(std::string const &form_target)
{
  return (new RobotomyRequestForm(form_target));
}

Form *makeShrubberyCreationForm(std::string const &form_target)
{
  return (new ShrubberyCreationForm(form_target));
}

Form *Intern::makeForm(std::string const &form_name, std::string const &form_target)
{
  try
  {
    t_form forms[3] = {{"shrubbery creation", &makeShrubberyCreationForm}, {"robotomy request", &makeRobotomyRequestForm}, {"presidential pardon", &makePresidentialForm}};

    for (int i = 0; i < 3; i++)
    {
      if (forms[i].name == form_name)
      {
        std::cout << "Intern creates " << form_name << " form" <<std::endl;
        return (forms[i].function_ptr(form_target));
      }
    }
    throw(unexistedForm());
  }
  catch (std::exception &e)
  {
    std::cout << form_name << e.what() << std::endl;
  }
  return (NULL);
}

const char *Intern::unexistedForm::what(void) const throw()
{
	  return (": This form seems to be unknowned");
}