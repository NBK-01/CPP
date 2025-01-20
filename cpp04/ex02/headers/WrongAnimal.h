
#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include "Animal.h"

class WrongAnimal
{
	protected:
		str _type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &copy);
		/*---------------------------------------*/
		/*wrong animal class does not use the virtual keyword
		 * this means that when these methods are called 
		 * for both parent and derived classes we will see that they have not been overriden*/
		void makeSound() const;
		str getType() const;
};

#endif // !WRONGANIMAL_H
