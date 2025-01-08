#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#pragma once

#include <string> 
#include "Contact.h"

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

class Phonebook
{
	private:
		Contact contacts[8];
		size_t		size;
	public:
		Phonebook();
		~Phonebook();
		size_t	get_size(void);
		void			set_size(size_t size);
		void			set_item(str first_name, str last_name, str nickname, str phone, str darkest_secret, int index);
		void			get_item(size_t index);
		void			get_items(void);

};

#endif
