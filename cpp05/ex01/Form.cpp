
# include "Form.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Form::Form(std::string const &name, int gradeSign, int gradeExec) 
: _name(name), _signe(false), _gradeSign(verifyGrade(gradeSign)), _gradeExec(verifyGrade(gradeExec)) {}

// COPY
Form::Form(Form const& copy)
: _name(copy.getName()), _gradeSign(copy.getGrade_sign()), _gradeExec(copy.getGrade_exec())
{
	*this = copy;
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
		_signe = copy.getSigne();
		//All the rest are constant members and cannot be changed value after initiliazation
	}
	return *this;
}

void operator<<(std::ostream &stream, Form &F)
{
	stream << "The form " << F.getName();
	if (F.getSigne() == true)
		stream << " is signed, ";
  	else
		stream << " is not signed, ";
  	stream << "grade to sign: " << F.getGrade_sign() << ", grade to execute: " << F.getGrade_exec() << std::endl;
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

void Form::beSigned(Bureaucrat const &B)
{
  if (verifyGrade(B.getGrade(), _gradeSign))
  {
      _signe = true;
      B.signForm(*this);
  }
  else
    B.signForm(*this);
}

int Form::verifyGrade(int new_grade)
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
		return -1;
	}
}

bool Form::verifyGrade(int grade, int minimum_grade)
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