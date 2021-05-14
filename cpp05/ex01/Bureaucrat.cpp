
# include "Bureaucrat.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	ExceptionGrade(grade);
}

// COPY
Bureaucrat::Bureaucrat(Bureaucrat const& copy)
{
	_grade = copy._grade;
}

/*
** DESTRUCTOR
*/

Bureaucrat::~Bureaucrat()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Bureaucrat& Bureaucrat::operator=(Bureaucrat const& copy)
{
	if (this != &copy)
	{
		_grade = copy._grade;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void Bureaucrat::ExceptionGrade(int new_grade)
{
  try //Try scope contains throw keyword, throw keyword is followed by parameter and linked with catch scope that contains same parameter, in catch scope you can set what you want but usually if exception class is used, its error output function is used
  {
    if (new_grade > 150)
      throw GradeTooLowException();
    else if (new_grade < 1)
      throw GradeTooHighException();
    _grade = new_grade;
  }
  catch (std::exception &e) //Is catchable by std::exception, as it has the std::exception as parent
  {
    e.what();
  }
}

const std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::setGrade(int grade)
{
	_grade = grade;
}

void Bureaucrat::incGrade(void)
{
	ExceptionGrade(_grade - 1);
}

void Bureaucrat::decGrade(void)
{
	ExceptionGrade(_grade + 1);
}

void Bureaucrat::signForm(Form const &form) const
{
  if (form.getSigne() == true)
    std::cout << _name << " signed the following form: " << form.getName() << std::endl;
  else
    std::cout << _name << " cannot sign the following form: " << form.getName() << " because his grade is too low" << std::endl;
}

std::ostream& operator<<(std::ostream& flux, Bureaucrat const& copy)
{
	std::cout << copy.getName() << ", bureaucrat grade " << copy.getGrade() << std::endl;
	return (flux);
}

// EXCEPTION

typedef Bureaucrat::GradeTooHighException GTHE;
typedef Bureaucrat::GradeTooLowException GTLE;

const char *GTLE::what() const throw()
{
	std::cerr << "The grade is bigger than 150" << std::endl;
	return (0);
}

const char *GTHE::what(void) const throw()
{
	std::cerr << "The grade is lower than 1" << std::endl;
	return (0);
}