#include "headers/FragTrap.h"

int main()
{
	FragTrap claptrap("Terminator");

	claptrap.attack("John Connor");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap.attack("John Connor");
	claptrap.attack("John Connor");
	claptrap.highFivesGuys();
	return (0);
}
