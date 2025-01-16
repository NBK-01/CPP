#include "../headers/Animal.h"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << WHITE "Animal default constructor called" RESET << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << CYAN "     ....brrrrr....  \n" RESET << std::endl;
}

str Animal::getType() const
{
	return (this->_type);
}

Animal::~Animal()
{
	std::cout << WHITE "Animal default destructor called" RESET << std::endl;
}
