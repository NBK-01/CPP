#include "./headers/Dog.h"
#include "./headers/Cat.h"
#include "./headers/WrongCat.h"

static void	wrong_animals()
{
	std::cout << GREEN "\n<----- Constructors ----->\n" RESET << std::endl;

	const WrongAnimal* cat = new WrongCat(); // constructs animal then cat due to it being derived from animal
	const WrongAnimal* animal = new WrongAnimal(); // constructs animal
	

	std::cout << GREEN "\n<------ Get Type ------->\n" RESET << std::endl;
	
	std::cout << "Type 1: " << cat->getType() << std::endl;
	std::cout << "Type 3: " << animal->getType() << std::endl;

	std::cout << GREEN "\n<------- Sounds --------->\n" RESET << std::endl;

	cat->makeSound(); // meow meow
	animal->makeSound(); // unique sound due to the use 
						 // of (virtual) in the parent class


	std::cout << GREEN "\n<----- Destructors ----->\n" RESET << std::endl;

	delete animal;
	delete cat;
}

int main()
{

	std::cout << GREEN "\n<----- Constructors ----->\n" RESET << std::endl;

	const Animal* dog = new Dog(); // constructs animal then dog due to it being derived from animal
	const Animal* cat = new Cat(); // constructs animal then cat due to it being derived from animal
	const Animal* animal = new Animal(); // constructs animal
	

	std::cout << GREEN "\n<------ Get Type ------->\n" RESET << std::endl;
	
	std::cout << "Type 1: " << cat->getType() << std::endl;
	std::cout << "Type 2: " << dog->getType() << std::endl;
	std::cout << "Type 3: " << animal->getType() << std::endl;

	std::cout << GREEN "\n<------- Sounds --------->\n" RESET << std::endl;

	cat->makeSound(); // meow meow
	dog->makeSound(); // woof woof
	animal->makeSound(); // unique sound due to the use 
						 // of (virtual) in the parent class


	std::cout << GREEN "\n<----- Destructors ----->\n" RESET << std::endl;

	delete animal;
	delete dog;
	delete cat;

	std::cout << GREEN "\n----- Wrong Animals -----" RESET << std::endl;
	wrong_animals();

	return (0);
}

