#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error"<< std::endl;
		return (1);
	}
	std::string	replace = argv[1]; 
	replace += ".replace";
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream ifs(argv[1]);
	std::ofstream ofs(replace);
	if (!ifs.is_open() || !ofs.is_open() || s1.empty() || s2.empty())
	{
		std::cerr << "Error" << std::endl;
		ifs.close();
		ofs.close();
		return (1);
	}

	std::string	output;
	char    c;
	int     i;
	while (ifs.get(c))
    {
		i++;
		output += c;
		std::string str = s1;
		str.resize(i);
		if (output != str)
		{
			ofs << output;
			output.erase();
			i = 0;
		}
		else if (i == s1.size())
		{
			ofs << s2;
			output.erase();
			i = 0;
		}
    }
	ifs.close();
	ofs.close();
	return (0);
}