#ifndef FIXED_H
# define FIXED_H

#pragma once

#include <string>
#include <iostream>

typedef std::string str;

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
		int	_val;
		const int	_bits;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		
		void	setRawBits() const;
		int		getRawBits(const int raw);
};


#endif // 
