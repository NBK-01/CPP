#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "./ClapTrap.h"

/*this is an example of inheritance in C++.
 * by doing this we are giving access to all the attributes
 * of claptrap to scavtrap*/
class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(str _name);
		~ScavTrap();
		ScavTrap(const ScavTrap &other);
		ScavTrap &operator=(const ScavTrap &scavTrap);
		/*---------------------------------*/
		void	guardGate();
};

#endif // !SCAVTRAP_H
