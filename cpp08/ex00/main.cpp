# include "easyfind.hpp"

// https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/

int main () 
{
	int array[] = {5, 19, 88, 42};
	int n = sizeof(array) / sizeof(array[0]);;

	std::vector<int> v_array(array, array + n);
	std::list<int> l_array(array, array + n);
	std::cout << "********* array *********" << std::endl;
	{
		std::cout << "--- test 00 ---" << std::endl;
		try
		{
			std::cout << easyfind(v_array, 88) << " found" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << "exception caught: " << e.what() << std::endl;
		}
		std::cout << "--- test 01 ---" << std::endl;
		try
		{
			std::cout << easyfind(v_array, 89) << " found" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << "exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << "********* list *********" << std::endl;
	{
		std::cout << "--- test 00 ---" << std::endl;
		try
		{
			std::cout << easyfind(l_array, 89) << " found" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << "exception caught: " << e.what() << std::endl;
		}
		std::cout << "--- test 01 ---" << std::endl;
		try
		{
			std::cout << easyfind(l_array, 42) << " found" << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << "exception caught: " << e.what() << std::endl;
		}
	}
	return 0;
}
