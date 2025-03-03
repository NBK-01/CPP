
#include "../headers/Fixed.h"

Fixed::Fixed(): _val(0)
{
	std::cout << GREEN "Default constructor called" RESET << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << YELLOW "Copy constructor called" RESET << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << YELLOW "Copy assignation operator called" RESET << std::endl;
	if (this != &other)
		this->_val = other._val; /*this is how we copy the values we want to 
										   the new obj but also be able to follow the results given in the subject*/
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << RED "Destructor called" RESET << std::endl;
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << CYAN "setRawBits member function called" RESET << std::endl;
	this->_val = raw;
}

int		Fixed::getRawBits() const
{
	std::cout << CYAN "getRawBits member function called" RESET << std::endl;
	return (this->_val);
}

Fixed::Fixed(const int val)
{
	std::cout << GREEN "Int constructor called" RESET << std::endl;
	this->_val = val << this->_bits;
}

Fixed::Fixed(const float val)
{
	std::cout << GREEN "Float constructor called" RESET << std::endl;
	this->_val = roundf(val * (1 << this->_bits));
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

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
