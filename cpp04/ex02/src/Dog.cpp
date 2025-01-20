
#include "../headers/Dog.h"

Dog::Dog(void)
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << GREEN "Dog default constructor called" RESET << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << BOLD RED "Dog default destructor called" RESET << std::endl;
}

Dog::Dog(const Dog &cpy)
{
	this->_brain = new Brain();
	this->_type = cpy._type;
}

Dog &Dog::operator=(const Dog &cpy)
{
	if (this != &cpy)
	{
		this->_brain = new Brain();
		this->_type = cpy._type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << BOLD BLUE "🐕🐕  woof woof   🐕🐕\n" RESET << std::endl;
}

void Dog::getIdeas()
{
	this->_brain->getIdeas();
}
