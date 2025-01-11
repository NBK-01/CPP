#include "../headers/Zombie.h"

Zombie* newZombie(str name)
{
	Zombie *zombie = new Zombie(name);
	zombie->announce();
	return (zombie);
}
