
# include "Convert.hpp"

/*
** MEMBER FUNCTIONS
*/

void cast_char(char c)
{
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<int>(c) << ".0" << std::endl;
}

void cast_int(int i)
{
    if (static_cast<char>(i) < 32 || static_cast<char>(i) > 126)
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void cast_double(double d)
{
    std::stringstream ss;

	if (static_cast<char>(d) < 32 || static_cast<char>(d) > 126)
		std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    ss << static_cast<float>(d);
    if (ss.str().find('.') < ss.str().length())
		std::cout << "float: " << ss.str() << "f" << std::endl;
	else
		std::cout << "float: " << ss.str() << ".0f" << std::endl;
    ss.str(std::string());
	ss << d;
	if (ss.str().find('.') < ss.str().length())
		std::cout << "double: " << ss.str() << std::endl;
	else
		std::cout << "double: " << ss.str() << ".0" << std::endl;
}

void special_double(double d)
{
    std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void cast_float(float f)
{
	std::stringstream ss;

	if (static_cast<char>(f) < 32 || static_cast<char>(f) > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	ss << f;
	if (ss.str().find('.') < ss.str().length())
		std::cout << "float: " << ss.str() << "f" << std::endl;
	else
		std::cout << "float: " << ss.str() << ".0f" << std::endl;
	ss.str(std::string());
	ss << static_cast<double>(f);
	if (ss.str().find('.') < ss.str().length())
		std::cout << "double: " << ss.str() << std::endl;
	else
		std::cout << "double: " << ss.str() << ".0" << std::endl;
}

void	special_float(float f)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<float>(f) << std::endl;
}