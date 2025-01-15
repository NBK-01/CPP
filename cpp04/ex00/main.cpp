# include "./headers/ClapTrap.h"

int main()
{
	ClapTrap claptrap("Terminator");

	claptrap.attack("John Connor");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap.attack("John Connor");
	claptrap.attack("John Connor");
	claptrap.attack("John Connor");
	claptrap.attack("John Connor");
	claptrap.attack("John Connor");
	claptrap.attack("John Connor");
	return (0);
}
