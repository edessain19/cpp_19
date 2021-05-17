
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


   
file << "              _{/ _{/{'\' }/}/}__" << std::endl;
file << "              {/{/'\'}{/{/'\'}('\'}{/'\'} _" << std::endl;
file << "             {/{/'\'}{/{/'\'}(_)'\'}{/{/'\'}  _" << std::endl;
file << "          {'\'{/('\'}'\'}{/{/'\'}'\'}{/){/}'\'} /'\'}" << std::endl;
file << "         {/{/(_)/}{'\'{/)'\'}{'\'(_){/}/}/}/}" << std::endl;
file << "        _{'\'{/{/{'\'{/{/(_)/}/}/}{'\'(/}/}/}" << std::endl;
file << "        {/{/{'\'{'\'{'\'(/}{'\'{\'/'}/}{'\'}(_){'\'/}'\'}" << std::endl;
file << "      _{'\'{/{'\'{/(_)'\'}/}{/{/{/'\'}'\'})'\'}{/'\'}" << std::endl;
file << "     {/{/{'\'{'\'(/}{/{'\'{'\'{'\'/})/}{'\'(_)/}/}'\'}" << std::endl;
file << "      {'\'{\'/'}(_){'\'{'\'{\'/'}/}(_){\'/'}{\'/'}/})/}" << std::endl;
file << "       {/{'\'{'\'/}{/{'\'{'\'{'\'/}/}{'\'{'\'/}/}'\'}(_)" << std::endl;
file << "      {/{'\'{'\'/}{/){'\'{'\'{'\'/}/}{'\'{'\'(/}/}'\'}/}" << std::endl;
file << "       {/{'\'{'\'/}(_){'\'{'\'{'\'(/}/}{'\'(_)/}/}'\'}" << std::endl;
file << "         {/({/{'\'{/{'\'{'\'/}(_){'\'/}/}'\'}/}('\'}" << std::endl;
file << "          (_){/{'\'/}{'\'{'\'/}/}{'\'{'\')/}/}(_)" << std::endl;
file << "            {/{/{'\'{'\'/}{/{'\'{'\'{'\'(_)/}" << std::endl;
file << "             {/{'\'{'\'{'\'/}/}{'\'{\\}/}" << std::endl;
file << "              {){/ {'\'/}{'\'/} '\'}'\'}" << std::endl;
file << "              (_)  '\'.-'.-/" << std::endl;
file << "          __...--- |'-.-'| --...__" << std::endl;
file << "   _...--   .-'    |'-.-'|  ' -.  --..__" << std::endl;
file << "     ' .  . '      |.'-._| '  . .       " << std::endl;
file << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
file << "          ' ..     |'-_.-|" << std::endl;
file << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
file << "              .'   |'- .-|   '." << std::endl;
file << "  ..-'   ' .  '.   `-._.-|   .'  '  - ." << std::endl;
file << "   .-' '        '-._______.-'     '  ." << std::endl;
file << "        .      ~," << std::endl;
file << "    .       .   |'\'   .    ' '." << std::endl;
file << "    ___________/  '\'____________" << std::endl;
file << "   /  Why is it, when you want  | " << std::endl;
file << "  |  something, it is so damn   |" << std::endl;
file << "  |    much work to get it?     |" << std::endl;
file << "   '\'___________________________'/'" << std::endl;

  file.close();
  std::cout << filename << " has been created" << std::endl;
}