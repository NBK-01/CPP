#include "./headers/MutantStack.h"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);


	mstack.pop();
	std::cout << "mstack.top() = " << mstack.top() << std::endl;
	std::cout << "mstack.size() = " << mstack.size() << std::endl;
	{
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
}
