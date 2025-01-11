
#include "../headers/Zombie.h"

Zombie	*zombieHorde(int N, str name)
{
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie[i].set_name(name);
	return (zombie);
}
