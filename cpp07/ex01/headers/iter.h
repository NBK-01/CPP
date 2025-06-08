#ifndef ITER_H 
# define ITER_H 

# include "./main.h"

template <typename T, typename F>
void iter(T* array, int length, F func)
{
    for (int i = 0; i < length; ++i) 
	{
        func(array[i]);
    }
}

#endif // !ITER_H
