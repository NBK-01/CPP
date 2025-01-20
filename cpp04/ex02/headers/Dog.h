
#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog: public Animal
{
	private:
		Brain	*_brain;
	public:
		Dog();
		Dog(const Dog &cpy);
		Dog &operator=(const Dog &cpy);
		~Dog();
		/*---------------------------------------*/
		void	makeSound() const;
		void	getIdeas();
};

#endif // !DOG_H
