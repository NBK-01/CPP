#include "../headers/Zombie.h"

void	randomChump(str name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}
