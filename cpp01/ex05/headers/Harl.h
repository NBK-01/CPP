#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>
#include <fstream>

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

class	Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	error(void);
		void	warning(void);
	public:
		Harl();
		~Harl();
		void	complain(str level);
};


#endif
