#include "../headers/Harl.h"

Harl::Harl() {}

Harl::~Harl() {}


void	Harl::warning(void) 
{
	std::cout << BOLD YELLOW "---------- WARNING -----------" << std::endl;
	std::cout << "i tHinK yOu sHoUlD uSe cOut iNstEAd Of pRinTf" << RESET << std::endl;
}

void	Harl::debug(void) 
{
	std::cout << BOLD BLUE "---------- DEBUG -----------" << std::endl;
	std::cout << "dO nOt UsE cPp 11 fEaTuReS." << RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << BOLD RED "---------- ERROR -----------" << std::endl;
	std::cout << "yOuR cOdE iS nOt cOmPiLiNg. aLso wE hAVe tO uSe THE FLAGSS!!!!!" << RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << BOLD GREEN "---------- INFO -----------" << std::endl;
	std::cout << "yOuR cOdE iS cOmPiLiNg. gOoD jOb." << RESET << std::endl;
}

void	Harl::complain(str level)
{
	void	(Harl::*func[])(void) = {&Harl::debug, &Harl::info, &Harl::error, &Harl::warning};
	str		lvls[] = {"DEBUG", "INFO", "ERROR", "WARNING"};

	for (int i = 0; i < 4; i++)
	{
		if (lvls[i] == level)
		{
			(this->*func[i])();
			return ;
		}
	}
	std::cout << BOLD RED "---------- HARL ERR -----------" << std::endl;
	std::cout << "Harl won't like this, level does not exist" << RESET << std::endl;
}
