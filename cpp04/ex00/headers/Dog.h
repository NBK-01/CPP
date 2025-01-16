
#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &cpy);
		Dog &operator=(const Dog &cpy);
		~Dog();
		/*---------------------------------------*/
		void makeSound() const;
		str getType() const;
};

#endif // !DOG_H
