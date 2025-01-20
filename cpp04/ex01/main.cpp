#include "./headers/Dog.h"
#include "./headers/Cat.h"
#include "./headers/WrongCat.h"

void	test_shallow_deep(void)
{	
	/*this is a deep copy example, after hi is out of scope it gets deleted but 
	 * the brain given to hello is still accesible and not deleted*/
	Dog	hello;
	{ 
		Dog hi = hello; 
	}
	hello.getIdeas();
	/*this is a shallow copy, where when the byeee cat is out of scope the brain 
	 * gets deleted due to it not being fully copied into the new obj*/
	WrongCat bye;
	{ 
		WrongCat byeee = bye; 
	}
	bye.getIdeas();
}

int main()
{
	/*test_shallow_deep();*/
	Animal *group[8];
	int i = -1;
	while (++i < 4)
		group[i] = new Cat();
	i = 3;
	while (++i < 8)
		group[i] = new Dog();
	i = -1;
	while (++i < 8)
		delete group[i];
}
