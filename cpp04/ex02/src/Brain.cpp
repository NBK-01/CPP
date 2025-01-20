
#include "../headers/Brain.h"

Brain::Brain()
{
	int	i = -1;

	while (++i < 100)
		this->_ideas[i] = "A million dollar idea";
	std::cout << CYAN "Brain default constructor called" RESET << std::endl;
}

Brain::Brain(const Brain &copy)
{
	int	i = -1;

	while (++i < 100)
		this->_ideas[i] = copy._ideas[i];
}

Brain	&Brain::operator=(const Brain &copy)
{
	int	i = -1;

	if (this != &copy)
		while (++i < 100)
			this->_ideas[i] = copy._ideas[i];
	return (*this);
}

void Brain::getIdeas()
{
	int i = -1;
	while (++i < 4)
		std::cout << this->_ideas[i] << std::endl;
}

Brain::~Brain()
{
	std::cout << BOLD GREEN "Brain default destructor called" RESET << std::endl;
}
