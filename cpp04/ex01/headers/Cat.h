#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat: public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat &operator=(const Cat &copy);
		/*---------------------------------------*/
		/*because we used (virtual) in the parent class we now
		 * can override the method functions with unique implementations*/
		void makeSound() const;
		str getType() const;
};

#endif // !CAT
