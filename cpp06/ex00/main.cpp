# include "./headers/ScalarConverter.hpp"
#include <cstdlib>


int main(int argc, char **argv)
{
	std::cout << GREEN BOLD "==========================" << RESET << std::endl;
	if (argc != 2)
		std::cout << RED "Cmon give me something i can work with" RESET << std::endl;
	else
		ScalarConverter::convert(argv[1]);
	return EXIT_SUCCESS;
}
