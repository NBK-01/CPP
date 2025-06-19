#include "headers/main.h"
#include "./headers/BitcoinExchange.h"

static void	init_btc(char *file)
{
	std::cout << GREEN " ====== Welcome to your own BTC converter ======" RESET << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << RED BOLD "! Error: " RESET << ARG_ERR << std::endl;
	else
	{
		init_btc(av[1]);
	}
}
