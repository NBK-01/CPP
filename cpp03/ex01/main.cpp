#include "headers/ScavTrap.h"

int main()
{
	ScavTrap claptrap("Terminator");

	claptrap.attack("John Connor");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap.attack("John Connor");
	claptrap.attack("John Connor");
	claptrap.guardGate();
	return (0);
}
