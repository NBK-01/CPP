
#include "../headers/WrongAnimal.h"


WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << WHITE "WrongAnimal default constructor called" RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << CYAN "     ....brrrrr but wrong....  \n" RESET << std::endl;
}

str WrongAnimal::getType() const
{
	return (this->_type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << WHITE "WrongAnimal default destructor called" RESET << std::endl;
}
