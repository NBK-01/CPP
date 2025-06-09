#ifndef ITER_H 
# define ITER_H 

# include "./main.h"
#include <iostream>
#include <cstddef>

/**
 * applies a function (func) to each element in an array.
 *
 * @param T The type of elements in the array.
 * @param F The type of the function. Must be callable with a T&.
 *
 */
template <typename T, typename F>
void iter(T* array, size_t length, F func)
{
    if (array == NULL)
    {
        std::cerr << RED "array is NULL :()" RESET << std::endl;
        return;
    }
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}

#endif // !ITER_H
