
# include "Convert.hpp"

bool is_nbr(char c)
{
    if (c >= '0' && c <= '9')
        return true;
    return false;
}

int		isNotValid(std::string str)
{
	int	nbPoint;
	
	nbPoint = 0;
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
			nbPoint++;
		if (nbPoint > 0 && !isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
			return (1);
		if (str[i] == 'f' && str[i + 1])
			return (1);
	}
	if (nbPoint > 1)
		return (1);
	return (0);
}

void	convertStr(std::string str)
{
	int i = 0;
	
	if (isNotValid(str))
	{
		std::cout << "The entry is not valid" << std::endl;
		return ;
	}
// ---------- char ? ------------- //

	if (!str[1] && !is_nbr(str[0]))
	{
		cast_char(str[0]);
		return ;
	}

// ---------- int ? -------------- //

	if (str[0] == '-')
		i++;
	while (is_nbr(str[i]))
        i++;
    if (str[i] == '\0')
    {
        cast_int(std::stoi(str));
        return ;
    }
	if (str[i] == '.')
        i++;
    while(str[i] == '0')
        i++;
    if (str[i] == '\0')
    {
        cast_int(std::stoi(str));
        return ;
    }

// ---------- double ? ----------- //

	while (is_nbr(str[i]))
        i++;
    if (str[i] == '\0')
    {
        cast_double(std::stod(str));
        return ;
    }
	if (str == "nan" || str == "inf" || str == "-inf")
	{
		special_double(std::stod(str));
		return ;
	}

// ---------- float ? ------------ //

	if ((str[i] == 'f' && str[i + 1] == 0))
	{
		cast_float(std::stof(str));
		return ;
	}
	if (str == "nanf" || str == "inff" || str == "-inff")
	{
		special_float(std::stof(str));
		return ;
	}

// ---------- other ? ------------ //
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
	return ;
}

/////////////////////ATTENTION TROP GRAND NOMBRE GENRE 488888888888888888

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		try
		{
			convertStr(argv[1]);
		}
		catch (const std::exception &e)
		{
			std::cout << "ERROR: " << e.what() << '\n';
		}
	}
	else
		std::cout << "ERROR : This program just take one parameter" << std::endl;
}