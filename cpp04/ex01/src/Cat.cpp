#include "../headers/Cat.h"

Cat::Cat(void)
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << BOLD GREEN "Cat default constructor called" RESET << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << BOLD RED "Cat default destructor called" RESET << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << BOLD YELLOW "🐈🐈  meow meow  🐈🐈\n" RESET << std::endl;
}

str Cat::getType() const
{
	return (this->_type);
}
