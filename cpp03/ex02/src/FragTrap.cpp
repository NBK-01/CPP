
#include "../headers/FragTrap.h"

FragTrap::FragTrap(str name): ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	ClapTrap::operator=(fragTrap);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "---------- HIGH FIVE GUYS -----------------" << std::endl;
	std::cout << GREEN "FragTrap " << this->_name << " says: 'High Five Guys!'\n\n" RESET << std::endl;
}
