
#include "../headers/WrongCat.h"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	this->_brain = new Brain();
	std::cout << BOLD GREEN "WrongCat default constructor called" RESET << std::endl;
}

WrongCat::~WrongCat()
{
	delete this->_brain;
	std::cout << BOLD RED "WrongCat default destructor called" RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
	this->_brain = copy._brain;
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{

	if (this != &copy)
	{
		this->_brain = copy._brain;
		this->_type = copy._type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << BOLD YELLOW "🐈🐈  meow meow but wrong  🐈🐈\n" RESET << std::endl;
}

str WrongCat::getType() const
{
	return (this->_type);
}

void WrongCat::getIdeas()
{
	this->_brain->getIdeas();
}
