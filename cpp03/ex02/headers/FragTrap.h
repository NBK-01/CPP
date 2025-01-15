
#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "./ClapTrap.h"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(str name);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &other);
		~FragTrap();
		/*----------------------------------------*/
		void highFivesGuys(void);
};

#endif // !FRAGTRAP_H
