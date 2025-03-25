# include "./headers/Bureaucrat.h"

int main()
{
	std::cout << GREEN "========= CREATION ============" RESET << std::endl;
	try { Bureaucrat Foo("Marvin", 155); }
	catch (const except &e) { std::cerr << RED "Exception: " << e.what() << RESET << std::endl; }

	try { Bureaucrat Bar("John", 0); }
	catch (const except &e) { std::cerr << RED "Exception: " << e.what() << RESET << std::endl; }

	std::cout << std::endl;

	std::cout << GREEN "========== DECREMENT ==========" RESET << std::endl;
	Bureaucrat Test("Jane", 150);
	try { Test.decrement(); }
	catch (const except &e) { std::cerr << RED "Exception: could not decrement: " << e.what() << RESET << std::endl;}

	std::cout << std::endl;

	std::cout << GREEN "========== INCREMENT ==========" RESET << std::endl;
	Bureaucrat Test2("Doe", 1);
	try { Test2.increment(); }
	catch (const except &e) { std::cerr << RED "Exception: could not increment: " << e.what() << RESET << std::endl;}

	std::cout << std::endl;

	std::cout << GREEN "============ TESTING ===========" RESET << std::endl;
	Bureaucrat print("Bill Nye", 4);
	std::cout << print;
	try { print.increment(); }
	catch (const except &e) { std::cerr << RED "Exception: could not increment22: " << e.what() << RESET << std::endl;}
	std::cout << BOLD GREEN "========= After increment ========" RESET << std::endl;
	std::cout << print << std::endl;

	try { print.decrement(); }
	catch (const except &e) { std::cerr << RED "Exception: could not decrement: " << e.what() << RESET << std::endl;}
	std::cout << BOLD GREEN "========= After decrement ========" RESET << std::endl;
	std::cout << print << std::endl;

}
