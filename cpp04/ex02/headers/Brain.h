#ifndef BRAIN_H
#define BRAIN_H

#include "Animal.h"

class Brain
{
	protected:
		str	_ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();
		Brain &operator=(const Brain &copy);
		/*void setIdea(str idea, int index);*/
		void getIdeas();
};

#endif // !BRAIN_H
