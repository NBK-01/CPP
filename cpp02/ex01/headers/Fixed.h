#ifndef FIXED_H
# define FIXED_H

#pragma once

#include <string>
#include <iostream>
#include <cmath>

/*typedef std::string str;*/

#define RESET        "\e[0m"
#define BOLD         "\e[1m"
#define UNDERLINE    "\e[4m"
#define CLEAR		 "\e[H\e[2J"

#define BLACK        "\e[30m"
#define RED          "\e[31m"
#define GREEN        "\e[32m"
#define YELLOW       "\e[33m"
#define BLUE         "\e[34m"
#define MAGENTA      "\e[35m"
#define CYAN         "\e[36m"
#define WHITE        "\e[37m"

/*introducing "orthodox canonical form" from now on all classes must contain*/
/*	a constrcutor*/
/*	a copy constructor*/
/*	a copy assignment op*/
/*	a destructor*/
class Fixed
{
	private:
		int					_val;
		static const int	_bits = 8;
	public:
		Fixed();
		/*------- Constructors ---------*/
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed &other);
		/*------- Destructor ----------*/
		~Fixed();
		/*------- Operator Overloads ---*/
		Fixed& operator=(const Fixed &other);
		/*-----------Set & Get------------------*/
		void	setRawBits(const int raw);
		int		getRawBits() const;
		/*--------- Member functions ----------*/
		float	toFloat(void) const;
		int		toInt(void) const;
};

/*------- Non-member functions ---------*/
/*----------- Overload op --------------*/
std::ostream& operator<<(std::ostream &out, const Fixed &fixed);


#endif // 
