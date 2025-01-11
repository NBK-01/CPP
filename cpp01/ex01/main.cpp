# include "./headers/Zombie.h"

int main()
{
	int N = 120;
	Zombie *zombie = zombieHorde(N, "Clicker");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete []zombie;
	return (0);
}
