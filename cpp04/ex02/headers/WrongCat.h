
#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		~WrongCat();
		WrongCat &operator=(const WrongCat &copy);
		/*---------------------------------------*/
		/*the implementation for makeSound here will not make 
		 * a difference since it will take one the implementation
		 * of the class it's inheriting from (WrongAnimal)*/
		void makeSound() const;
		str getType() const;
};

#endif // !WRONGCAT_H
