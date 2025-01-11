# include "./headers/main.h"

void	test_func(void)
{
	str	str1 = "HI THIS BRAIN";
	str str2 = "BYE THIS IS BRAIN";
	str	&strREF = str1;
	str *strPTR = &str2;

	std::cout << "----------------REF TEST-------------------" << std::endl;
	std::cout << MAGENTA "Value of str1: " << RESET << str1 << std::endl;
	std::cout << MAGENTA "Value of ref str: " << RESET << strREF << std::endl;
	strREF = str2;
	std::cout << MAGENTA "Value of str1: " << RESET << str1 << std::endl;
	std::cout << MAGENTA "Value of ref str: " << RESET << strREF << std::endl;
	std::cout << "----------------PTR TEST-------------------" << std::endl;
	std::cout << MAGENTA "Value of str2: " << RESET << str2 << std::endl;
	std::cout << MAGENTA "Value of ptr str: " << RESET << *strPTR << std::endl;
	str1 = "HELLO";
	strPTR = &str1;
	std::cout << MAGENTA "Value of str2: " << RESET << str2 << std::endl;
	std::cout << MAGENTA "Value of ptr str: " << RESET << *strPTR << std::endl;
}

int main()
{
	str string = "HI THIS IS BRAIN";
	str *stringPTR = &string;
	str &stringREF = string;

	/*we are using the same string in all three variables,*/
	/*the ref and og have the same address.*/
	/*the ptr store the address of the og string but the ptr itself has its own address.
	 * if we print strPTR without the & you will be printing the address stored by the ptr*/
	std::cout << "-----------------------------------" << std::endl;
	std::cout << MAGENTA "Address of og string: " << RESET << &string << std::endl;
	std::cout << MAGENTA "Address of ptr string: " << RESET << &stringPTR << std::endl;
	std::cout << MAGENTA "Address of ref string: " << RESET << &stringREF << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << GREEN "Value of string: " << RESET << string << std::endl;
	std::cout << GREEN "Value of string: " << RESET << *stringPTR << std::endl;
	std::cout << GREEN "Value of string: " << RESET << stringREF << std::endl;

	/*uncomment this to get an idea of how references and pointers work
	 * and some differences between them*/
	/*
	 * test_func();
	 * */
	return (0);
}
