#include "./headers/Base.hpp"
#include "./headers/Classes.hpp"

int main (void)
{
	Base *hello = gen();

	identify(hello);
	identify(*hello);

	delete hello;
	return 0;
}
