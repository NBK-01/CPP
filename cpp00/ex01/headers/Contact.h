#ifndef CONTACT_H
# define CONTACT_H

#pragma once
#include <string>

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



class Contact
{
	private:
		str		first_name;
		str		last_name;
		str		nickname;
		str		phone;
		str		darkest_secret;
		int	index;
	public:
		Contact();
		~Contact();
		void		set_contact(str first_name, str last_name, str nickname,
							str phone, str darkest_secret, int index);
		const str	get_contact(bool full);
};

#endif // !CONTACT_H
