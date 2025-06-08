#include "./headers/Serializer.hpp"
#include "headers/Data.hpp"
#include <cstdlib>
#include <stdlib.h>

static int	serializer()
{
	Data	data;
	data.value = 20;
	uintptr_t x = Serializer::serialize(&data); 
	Data *ptr = Serializer::deserialize(x);
    std::cout << GREEN BOLD "Address: " RESET << &data << std::endl;
    std::cout << GREEN BOLD "Deserialized ptr: " RESET << ptr << std::endl;
    std::cout << GREEN BOLD "Value: " RESET << ptr->value << std::endl;
    if (ptr == &data)
		return (1);
    else
		return (0);
}

int main ()
{
	int	res;

	std::cout << GREEN "================================" RESET << std::endl;
	res = serializer();
	if (!res)
	{
		std::cout << RED "oops, that didn't work out" RESET << std::endl;
		return (1);
	}
	return (0);
}
