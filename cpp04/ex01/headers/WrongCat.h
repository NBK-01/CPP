
#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "Brain.h"
#include "WrongAnimal.h"

class WrongCat: public WrongAnimal
{
	private:
		Brain	*_brain;
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
		void	getIdeas();
};

#endif // !WRONGCAT_H
