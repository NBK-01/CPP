
#include "../headers/HumanB.h"

HumanB::HumanB(str name) : name(name) {}

HumanB::~HumanB(){}

void	HumanB::set_weapon(Weapon &w)
{
	this->weapon = &w;
}

void	HumanB::attack()
{
	if (weapon == NULL)
	{
		std::cout << BOLD << RED << this->name << " has no weapon" << RESET << std::endl;
		return ;
	}
	std::cout << BOLD << GREEN << this->name << " attacks with his " << this->weapon->get_type() << RESET << std::endl;
}
