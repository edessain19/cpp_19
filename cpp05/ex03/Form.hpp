
#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;
//Used to resolve reciprocal include problem

class Form
{
	private:
		const std::string	_name;
		bool				_signe;
		const int			_gradeSign;
		const int			_gradeExec;

	public:
		Form(std::string const &_name, int _gradeSign, int _gradeExec);
		Form(Form const& copy);
		virtual ~Form();
		Form& operator=(Form const& copy);

		std::string const &getName() const;
		bool getSigne() const;
		int getGrade_sign() const;
		int getGrade_exec() const;
		void beSigned(Bureaucrat const &B);
		int execute(Bureaucrat const & executor) const;
		virtual void Action() const = 0;

		int verifyGrade(int grade) const;
		bool verifyGrade(int grade, int minimum_grade) const;
		bool verifySignature() const;

	class GradeTooHighException : public std::exception
	{
		public:
			int warning;
			const char *what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what(void) const throw();
	};
	class UnsignedException : public std::exception
  	{
		public:
    		const char* what(void) const throw();
  	};

};

void operator<<(std::ostream &stream, Form &F);

#endif
