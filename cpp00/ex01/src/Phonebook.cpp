
#include "../headers/Phonebook.h"
#include <iostream>

Phonebook::Phonebook()
{
	this->size = 0;
	std::cout << GREEN "Phonebook created" RESET << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << RED "Phonebook destroyed" RESET << std::endl;
}

size_t	Phonebook::get_size(void)
{
	return (this->size);
}

void		Phonebook::set_size(size_t size)
{
	this->size = size;
}

void	Phonebook::set_item(str first_name, str last_name, str nickname,
				str phone, str darkest_secret, int index)
{
	get_size();
	index = this->size;
	if (this->size == 8)
	{
		std::cout << RED "Phonebook is full -- removed one of your contacts tho :)" RESET << std::endl;
		index = 0;
		this->size = 7;
		return ;
	}
	this->contacts[index].set_contact(first_name, last_name, nickname, phone, darkest_secret, index);
	size++;
	index++;
}

void	Phonebook::get_item(size_t index)
{
	this->contacts[index].get_contact(true);
}

void	Phonebook::get_items(void)
{
	size_t i = 0;
	while (i < this->size)
	{
		this->contacts[i].get_contact(false);
		i++;
	}
}
