#ifndef WHATEVER_H
# define WHATEVER_H

# include "./main.h"

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T min(const T &a, const T &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template<typename T>
T max(const T &a, const T &b)
{
	if (a > b)
		return a;
	else
		return b;
}


#endif // !WHATEVER_H
