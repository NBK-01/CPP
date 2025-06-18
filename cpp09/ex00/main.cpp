#include "headers/main.h"
#include "./headers/BitcoinExchange.h"

void	read_file(char *file)
{
	
}

int main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << RED BOLD "! Error: " RESET << ARG_ERR << std::endl;
	else
		read_file(av[1]);
}
