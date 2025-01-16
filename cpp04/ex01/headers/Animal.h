#ifndef ANIMAL_H
# define ANIMAL_H

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

class Animal
{
	protected:
		str _type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		/*---------------------------------------*/
		/*we're using the (virtual) keyword here to be able
		 * to override the function in the derived class*/
		virtual str getType() const;
		virtual void makeSound() const;
};

#endif // 
