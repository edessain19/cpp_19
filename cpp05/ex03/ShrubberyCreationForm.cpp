
# include "ShrubberyCreationForm.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
: Form("ShrubberyCreationForm", 145, 137), _target(target) {}

// COPY
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy)
:Form("ShrubberyCreationForm", 145, 137), _target(copy.getTarget()) {}

/*
** DESTRUCTOR
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

/*
** MEMBER FUNCTIONS
*/

std::string const &ShrubberyCreationForm::getTarget() const
{
  return _target;
}

void ShrubberyCreationForm::Action() const
{
	std::string filename;

	filename = _target + "_shrubbery";
	std::ofstream file(filename);

	file << "\\/ |    |/" << std::endl;
	file << "\\/ / \\||/  /_/___/_"<< std::endl;
	file << "\\/   |/ \\/"<< std::endl;
	file << "_\\__\\_\\   |  /_____/_"<< std::endl;
	file << "\\  | /          /"<< std::endl;
	file << "__ _-----`  |{,-----------~"<< std::endl;
	file << "\\ }{"<< std::endl;
	file << "}{{"<< std::endl;
	file << "}}{"<< std::endl;
	file << "{{}"<< std::endl;
	file << ", -=-~{ .-^- _"<< std::endl << std::endl << std::endl;
	file << "\\/ |    |/" << std::endl;
	file << "\\/ / \\||/  /_/___/_"<< std::endl;
	file << "\\/   |/ \\/"<< std::endl;
	file << "_\\__\\_\\   |  /_____/_"<< std::endl;
	file << "\\  | /          /"<< std::endl;
	file << "__ _-----`  |{,-----------~"<< std::endl;
	file << "\\ }{"<< std::endl;
	file << "}{{"<< std::endl;
	file << "}}{"<< std::endl;
	file << "{{}"<< std::endl;

  file.close();
  std::cout << filename << " has been created" << std::endl;
}