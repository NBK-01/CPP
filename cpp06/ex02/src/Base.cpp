#include "../headers/Base.hpp"
#include "../headers/Classes.hpp"
#include <cstdlib>

Base::~Base() {}

Base	*gen(void)
{
	int	rand;
	srand(time(0));
	rand = std::rand() % 3;

	switch (rand)
	{
		case 0:
			std::cout << GREEN "==========================" RESET << std::endl;
			std::cout << YELLOW "==== Generated type A ====" RESET << std::endl;
			std::cout << GREEN "==========================" RESET << std::endl;
			return new A;
		case 1:
			std::cout << GREEN "==========================" RESET << std::endl;
			std::cout << YELLOW "==== Generated type B ====" RESET << std::endl;
			std::cout << GREEN "==========================" RESET << std::endl;
			return new B;
		default:
			std::cout << GREEN "==========================" RESET << std::endl;
			std::cout << YELLOW "==== Generated type C ====" RESET << std::endl;
			std::cout << GREEN "==========================" RESET << std::endl;
			return new C;
	}
}

void	identify(Base *ptr)
{
	if (dynamic_cast<A *>(ptr))
	{
		std::cout << "(PTR) Type is ------->";
		std::cout << GREEN " | A |" RESET << std::endl;
	}
	else if (dynamic_cast<B *>(ptr))
	{
		std::cout << "(PTR) Type is ------->";
		std::cout << GREEN " | B |" RESET << std::endl;
	}
	else if (dynamic_cast<C *>(ptr))
	{
		std::cout << "(PTR) Type is -------->";
		std::cout << GREEN " | C |" RESET << std::endl;
	}
	else
		std::cout << RED "Yeah, we dont have that here" RESET << std::endl;
}

void	identify(Base &ref)
{
	try {
		(void)dynamic_cast<A &>(ref);
		std::cout << "(REF) Type is ------->";
		std::cout << GREEN " | A |" RESET << std::endl;
	} catch (...)
	{
		try {
			(void)dynamic_cast<B &>(ref);
			std::cout << "(REF) Type is ------->";
			std::cout << GREEN " | B |" RESET << std::endl;
		} catch (...) {
			try {
				(void)dynamic_cast<C &>(ref);
				std::cout << "(REF) Type is ------->";
				std::cout << GREEN " | C |" RESET << std::endl;
			} catch (...){
				std::cout << "Yeah, we dont have that here";
			}
		}
	}
}
