#include "../headers/Zombie.h"

Zombie::Zombie(str name) : name(name)
{
	std::cout << GREEN << name << " finally woke up\n" RESET << std::endl;
}

Zombie::~Zombie()
{
	std::cout << RED << name << " decided to call it a day\n" RESET << std::endl;
}

void Zombie::announce() const
{
	std::cout << name << MAGENTA " :BraiiiiiiinnnzzzZ..\n" RESET << std::endl;
}

