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
/*private attr - name given to zombie on init
 * public announce func to log when zombie has been created and who*/
class Zombie
{
	private:
		str name;
	public:
		Zombie(str name);
		~Zombie();
		void announce() const;
};

/*function (newZombie) init new zombie on heap due to having to return it*/
/*function (randomChump) init new zombie on stack announces and it's gone*/
Zombie*	newZombie(str name);
void	randomChump(str name);

#endif // 
