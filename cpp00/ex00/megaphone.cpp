#include <cctype>
#include <cstring>
#include <iostream>
#include <cstdio>


int		main(int argc, char **argv)
{
	int j = 1;
	char *str;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		while (j < argc)
		{
			str = argv[j];
			for (int i = 0; i < (int)strlen(argv[j]); i++)
				str[i] = toupper(argv[j][i]);
			std::cout << str;
			j++;
		}
		std::cout << "\n";
	}
	return (0);
}
