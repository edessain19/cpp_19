
#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
# include <string>

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		virtual ~Intern();
		Form *makeForm(std::string const &form_name, std::string const &form_target);
	private:
		typedef struct s_form
		{
			std::string name;
			Form *(*function_pointer)(std::string const &form_target);
		}				t_form;

};

#endif
