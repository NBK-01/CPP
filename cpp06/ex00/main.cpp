# include "./headers/ScalarConverter.hpp"
#include <cstdlib>


int main(int argc, char **argv)
{
	std::cout << GREEN BOLD "========= A Scalar Converter =================\n" << RESET << std::endl;
	if (argc != 2)
		std::cout << RED "Cmon give me something i can work with" RESET << std::endl;
	else
		ScalarConverter::convert(argv[1]);
	std::cout << GREEN BOLD "\n=============================================" << RESET << std::endl;
	return EXIT_SUCCESS;
}
