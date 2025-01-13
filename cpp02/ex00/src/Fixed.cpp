
#include "../headers/Fixed.h"

Fixed::Fixed(): _bits(8) {}

Fixed::Fixed(const Fixed &other) : _bits(other._bits)
{
	this->_val = other._val;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		this->_val = other._val;
	}
	return (*this);
}

Fixed::~Fixed(){}
