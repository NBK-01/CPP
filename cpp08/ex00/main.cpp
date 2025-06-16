#include <iostream>
#include <vector>
#include <list>
#include "./headers/easyfind.h"

int main() {
	std::cout << GREEN BOLD << "===++++======++++======++++===" << RESET << std::endl;
	std::cout << GREEN BOLD << "=======Easyfind Example=======" << RESET << std::endl;
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    std::list<int> lst;
    lst.push_back(100);
    lst.push_back(200);
    lst.push_back(300);

    try {
        std::vector<int>::const_iterator itVec = easyfind(vec, 20);
        std::cout << BLUE  "\nFound in vector: " RESET << *itVec << std::endl;

        std::list<int>::const_iterator itList = easyfind(lst, 300);
        std::cout << BLUE "Found in list: " RESET << *itList << std::endl;

        std::cout << YELLOW "\nSearching for 999 ..." RESET << std::endl;
        easyfind(lst, 999);

    } catch (const std::exception& e) {
		std::cerr << RED BOLD "\n!!!!!!           !!!!!!" RESET << std::endl;
        std::cerr << RED BOLD "Exception: " RESET << e.what() << std::endl;
		std::cerr << RED BOLD "!!!!!!           !!!!!!" RESET << std::endl;
    }

    return 0;
}
