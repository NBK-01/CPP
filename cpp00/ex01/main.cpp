
#include "headers/Phonebook.h"
#include <iomanip>
#include <iostream>

void	fn_search(Phonebook &phonebook)
{
	int	index = 0;

    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << GREEN "|   ID	|  First	|  Last	|  Nickname  |" RESET << std::endl;
    phonebook.get_items();
    if (phonebook.get_size() < 1) {
		std::cout << RED "oh well, your phonebook is empty. sad" RESET << std::endl;
        return ;
    }
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "\n";
    std::cout << YELLOW "View a contact by selecting by [ID]" << std::endl;
	for (int i = phonebook.get_size(); i > 0; i--)
		std::cout << "ID: " << i << std::endl;
	std::cout << "\n";
	for (;;)
	{
		std::cin >> index;
		std::cin.ignore(10000, '\n');
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << RED "We only take numbers here" RESET << std::endl;
		}
		else if (index >= 0 && index <= (int)phonebook.get_size())
		{
			phonebook.get_item(index);
			break ;
		}
		else
			std::cout << RED "Pick something out of the list please" RESET << std::endl;
	}
}

void fn_add(Phonebook &phonebook)
{
    std::string fn, ln, nn, phone, secret;

    std::cout << "> First Name " << std::endl;
    std::cin >> std::ws;
    std::getline(std::cin, fn);
    std::cout << "> The name that comes after that" << std::endl;
    std::getline(std::cin, ln);
    std::cout << "> A cool nickname" << std::endl;
    std::getline(std::cin, nn);
    std::cout << "> Something to call them with" << std::endl;
    std::getline(std::cin, phone);
    std::cout << "> their deepest darkest secret" << std::endl;
    std::getline(std::cin, secret);
    std::cout << CLEAR GREEN "we're all good here, congrats" RESET << std::endl;
    phonebook.set_item(fn, ln, nn, phone, secret, phonebook.get_size());
}

int main (void)
{
	Phonebook phonebook;
	str cmd;

	std::cout << std::setw(30) << std::right << CLEAR GREEN "Welcome to your phonebook!" RESET << std::endl;
	std::cout << YELLOW "Warning: it's not that good of a phonebook" RESET << std::endl;
	for (;;)
	{
		std::cout << GREEN "Enter a command: " RESET "ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			break ;
		if (cmd == "ADD")
		{
			std::cout << CLEAR GREEN "Adding a new contact" RESET << std::endl;
			fn_add(phonebook);
		}
		else if (cmd == "EXIT")
		{
			std::cout << RED "Oh well goodbye!! thanks" RESET << std::endl;
			break ;
		}
		else if (cmd == "SEARCH")
		{
			std::cout << CLEAR GREEN "Searching for a contact" RESET << std::endl;
			fn_search(phonebook);
		}
		else
			std::cout << CLEAR RED "I don't know what you're talking about" RESET << std::endl;
	}
}
