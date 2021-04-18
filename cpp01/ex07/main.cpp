#include <iostream>
#include <fstream>

int	error(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}

int     main(int argc, char **argv)
{
    if (argc != 4)
		return (error("Error : arguments not valid"));
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream   ifs(filename);
    if (!ifs)
        return (error("Error : File can't open"));
    filename += ".replace";
    std::ofstream ofs(filename);
    if (!ofs)
        return (error("Error : File can't open"));

    std::string str;
    char    c;
    int     i;

    while (ifs.get(c))
    {
        if (c == ' ')
        {
            if (str.compare(s1) == 0)
                ofs << s2 << " ";
            else
                ofs << str << " ";
            str.erase();
        }
        else
            str += c;
    }
    if (str.compare(s1) == 0)
        ofs << s2 << " ";
    else
        ofs << str << " ";
    str.erase();
    return (0);
}