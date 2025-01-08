
#include "../headers/Contact.h"
#include <iostream>
#include <iomanip>

Contact::Contact()
{
	std::cout << GREEN "Contact created" RESET << std::endl;
}

Contact::~Contact()
{
	std::cout << RED "Contact destroyed" RESET << std::endl;
}

void	Contact::set_contact(str first_name, str last_name, str nickname,
							str phone, str darkest_secret, int index)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone = phone;
	this->darkest_secret = darkest_secret;
	this->index = index;
}

static const str	get_contacts(str str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

const str	Contact::get_contact(bool full)
{
	if (full == false)
	{
		 std::cout << "| " << std::setw(10) << std::right << this->index << "| "
          << std::setw(10) << std::right << get_contacts(this->first_name) << "| "
          << std::setw(10) << std::right << get_contacts(this->last_name) << "| "
          << std::setw(10) << std::right << get_contacts(this->nickname) << "|\n";
	}
	else
	{
		std::cout << "-------------------------------------------------" << std::endl;
		std::cout << YELLOW"		YOUR CONTACT				   " RESET << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
		std::cout << GREEN UNDERLINE "First name: " RESET << this->first_name << std::endl << std::endl;
		std::cout << GREEN UNDERLINE "Last name: " RESET << this->last_name << std::endl << std::endl;
		std::cout << GREEN UNDERLINE "Nickname: " RESET << this->nickname << std::endl << std::endl;
		std::cout << GREEN UNDERLINE "Phone number: " RESET << this->phone << std::endl << std::endl;
		std::cout << GREEN UNDERLINE "Darkest secret: " RESET << this->darkest_secret << std::endl << std::endl;
	}
	return ("");
}
