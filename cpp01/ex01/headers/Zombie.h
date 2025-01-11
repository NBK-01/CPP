#ifndef ZOMBIE_H
# define ZOMBIE_H

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

/*zombie class -- pretty simple, right?*/
/*private attr - name given to zombies on init
 * public announce func to log when zombie has been created
 * ex01 asks for N number of zombies allocated */
class Zombie
{
	private:
		str name;
	public:
		Zombie();
		~Zombie();
		void	announce() const;
		void	set_name(str name);
};

/*function prototypes*/
/* we are asked to create N zombies in a horde
 * We use N and allocate using (new[N])
 * Then we use our set_name member N times to assign names*/
Zombie* zombieHorde(int N, str name);

#endif // 
