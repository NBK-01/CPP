
#include "../headers/WrongCat.h"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << BOLD GREEN "WrongCat default constructor called" RESET << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << BOLD RED "WrongCat default destructor called" RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
		this->_type = copy._type;
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
