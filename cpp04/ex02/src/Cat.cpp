#include "../headers/Cat.h"

Cat::Cat(void)
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << GREEN "Cat default constructor called" RESET << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << BOLD RED "Cat default destructor called" RESET << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->_type = this->_type;
	this->_brain = copy._brain;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		this->_brain = copy._brain;
		this->_type = copy._type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << BOLD YELLOW "🐈🐈  meow meow  🐈🐈\n" RESET << std::endl;
}

void Cat::getIdeas()
{
	this->_brain->getIdeas();
}
