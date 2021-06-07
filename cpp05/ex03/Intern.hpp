
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
	private:
		typedef struct s_form
		{
			std::string name;
			Form *(*function_ptr)(std::string const &form_target);
			// 1) return type of the function pointed to, 2) the name of the function pointer, 3) its arguments
		}				t_form;

	public:
		Intern();
		virtual ~Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &copy);
		Form *makeForm(std::string const &form_name, std::string const &form_target);
		class unexistedForm : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
};

#endif
