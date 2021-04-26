
# include "Form.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Form::Form(std::string const &name, int gradeSign, int gradeExec) 
: _name(name), _signe(false), _gradeSign(ExceptionGrade(gradeSign)), _gradeExec(ExceptionGrade(gradeExec)) {}

// COPY
Form::Form(Form const& copy)
{
	
}

/*
** DESTRUCTOR
*/

Form::~Form()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Form& Form::operator=(Form const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

std::string const &Form::getName() const
{
	return (_name);
}

bool Form::getSigne() const
{
	return (_signe);
}

int Form::getGrade_sign() const
{
	return(_gradeSign);
}

int Form::getGrade_exec() const
{
	return(_gradeExec);
}

int Form::ExceptionGrade(int new_grade)
{
	try //Try scope contains throw keyword, throw keyword is followed by parameter and linked with catch scope that contains same parameter, in catch scope you can set what you want but usually if exception class is used, its error output function is used
	{
		if (new_grade > 150)
			throw GradeTooLowException();
		else if (new_grade < 1)
			throw GradeTooHighException();
		return new_grade;
	}
	catch (std::exception &e) //Is catchable by std::exception, as it has the std::exception as parent
	{
		e.what();
		return 1; //If invalid grade set to one so that it does not get executed or signed when it should not
	}
}

bool Form::ExceptionGrade(int grade, int minimum_grade)
{
	try
	{
	if (grade > minimum_grade)
		throw GradeTooLowException();
	}
	catch (std::exception &e)
	{
		e.what();
		return false;
	}
	return true;
}

// EXCEPTION

typedef Form::GradeTooHighException GTHE;
typedef Form::GradeTooLowException GTLE;

const char *GTLE::what(void) const throw()
{
	std::cerr << "The grade is too high" << std::endl;
	return (0);
}

const char *GTHE::what(void) const throw()
{
	std::cerr << "The grade is too low" << std::endl;
	return (0);
}