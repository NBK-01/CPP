#include "../headers/Zombie.h"

Zombie::Zombie()
{
	int	x = 1;
	std::cout << GREEN << "Zombie "<< x << " joined the horde\n" RESET << std::endl;
	x += 1;
}

Zombie::~Zombie()
{
	std::cout << RED << name << " left our horde\n" RESET << std::endl;
}

void Zombie::announce() const
{
	std::cout << name << MAGENTA " :BraiiiiiiinnnzzzZ..\n" RESET << std::endl;
}

void Zombie::set_name(str name)
{
	this->name = name;
}

