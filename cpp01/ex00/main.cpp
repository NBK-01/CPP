# include "./headers/Zombie.h"

int main()
{
	Zombie *zombie;
	/*zombie allocated on the heap and is freed
	 * when we call delete*/
	zombie = newZombie("Dr. Jekyll");
	/*initialized on stack and destroyed on end of scope 
	 * or when the program ends*/
	randomChump("Mr. Hyde");
	/*freeing zombie we allocated on the heap*/
	delete zombie;
	return (0);
}
