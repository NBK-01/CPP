
#include "../headers/HumanA.h"

HumanA::HumanA(str name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack()
{
	std::cout << BOLD << RED << this->name << " attacks with his " << this->weapon.get_type() << RESET << std::endl;
}
