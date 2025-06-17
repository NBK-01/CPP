#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>
# include "main.h"

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &other) : std::stack<T>(other) {}
		MutantStack &operator=(const MutantStack &other)
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			return *this;
		}
		virtual ~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() { return std::stack<T>::c.begin(); }
		iterator end() { return std::stack<T>::c.end(); }
	private:
};

#endif // !MUTANTSTACK_H
