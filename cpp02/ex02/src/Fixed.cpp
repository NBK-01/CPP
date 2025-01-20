
#include "../headers/Fixed.h"

Fixed::Fixed(): _val(0)
{
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::Fixed(const int val)
{
	this->_val = val << this->_bits;
}

Fixed::Fixed(const float val)
{
	this->_val = roundf(val * (1 << this->_bits));
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_val = other._val; /*this is how we copy the values we want to 
										   the new obj but also be able to follow the results given in the subject*/
	return (*this);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->_val > other._val);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->_val < other._val);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->_val >= other._val);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->_val <= other._val);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->_val == other._val);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->_val != other._val);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed f;
	f._val = this->_val + other._val;
	return (f);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed f;
	f._val = this->_val - other._val;
	return (f);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed f;
	f._val = (this->_val * other._val) >> this->_bits;
	return (f);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed f;
	if (other._val == 0)
	{
		std::cout << RED "You should know better, we don't divide by zero" RESET << std::endl;
		return (f);
	}
	f._val = (this->_val << this->_bits) / other._val;
	return (f);
}

Fixed& Fixed::operator++()
{
	this->_val++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed f(*this);
	++this->_val;
	return (f);
}

Fixed& Fixed::operator--()
{
	this->_val--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed f(*this);
	--this->_val;
	return (f);
}

void	Fixed::setRawBits(const int raw)
{
	this->_val = raw;
}

int		Fixed::getRawBits() const
{
	return (this->_val);
}


float	Fixed::toFloat(void) const
{
	float f = (float)this->_val / (1 << this->_bits);
	return (f);
}

int		Fixed::toInt(void) const
{
	int	i = this->_val >> this->_bits;
	return (i);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
