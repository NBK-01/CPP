#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "main.h"
# include "Data.hpp"
# include <stdint.h>

class Serializer {
public:
	Serializer();
	Serializer(const Serializer &cpy);
	Serializer &operator=(const Serializer &cpy);
	virtual ~Serializer() = 0;

	static	uintptr_t	serialize(Data *ptr);
	static	Data		*deserialize(uintptr_t raw);
private:
	
};

#endif // !SERIALIZER_HPP
