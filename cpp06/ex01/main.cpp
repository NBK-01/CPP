#include "./headers/Serializer.hpp"
#include "headers/Data.hpp"
#include <cstdlib>
#include <stdlib.h>

static int	serializer(char **av)
{
	Data	data;
	data.value = atoi(av[1]);
	uintptr_t x = Serializer::serialize(&data); 
	Data *ptr = Serializer::deserialize(x);
    std::cout << "Original Data address: " << &data << std::endl;
    std::cout << "Deserialized pointer:    " << ptr << std::endl;
    std::cout << "Value in Data: " << ptr->value << std::endl;
    if (ptr == &data)
		return (1);
    else
		return (0);
}

int main (int ac, char **av)
{
	int	res;

	std::cout << GREEN "================================" RESET << std::endl;
	if (ac != 2)
		std::cout << RED "give me something i can work with" RESET << std::endl;
	else
		res = serializer(av);
	if (!res)
	{
		std::cout << RED "oops, that didn't work out" RESET << std::endl;
		return (1);
	}
	return (0);
}
