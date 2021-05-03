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
	std::string	output;
	std::string::size_type index = 0;
	std::ofstream ofs(replace);

	if (!ifs.is_open() || !ofs.is_open() || s1.empty() || s2.empty())
	{
		std::cerr << "Error" << std::endl;
		ifs.close();
		ofs.close();
		return (1);
	}
	std::stringstream buffer;
	buffer << ifs.rdbuf();
	output = buffer.str();

	while ((index = output.find(s1)) != std::string::npos)
		output.replace(index, s1.length(), s2);
	ofs << output;
	ifs.close();
	ofs.close();
	return (0);
}