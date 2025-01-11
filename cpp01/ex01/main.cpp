# include "./headers/Zombie.h"

int main()
{
	int N = 0;
	if (N <= 0)
	{
		std::cout << RED << "Invalid number of zombies\n" RESET;
		return (1);
	}
	Zombie *zombie = zombieHorde(N, "Clicker");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete []zombie;
	return (0);
}
