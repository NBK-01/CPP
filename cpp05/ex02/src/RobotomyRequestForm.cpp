
#include "../headers/RobotomyRequestForm.h"
#include <ctime>
#include <cstdlib>


RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45), _target("Robotomy Target") {}

RobotomyRequestForm::RobotomyRequestForm(const str target) : AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		_target = other._target;
	return *this;
}

void RobotomyRequestForm::action() const
{
	std::srand(std::time(0));
    int randomValue = std::rand() % 2;
    
    if (randomValue == 0)
	{
		std::cout << GREEN << "BEEP BEEP BEEPPPPP BEEEEEP" << RESET << std::endl;
        std::cout << YELLOW "Robtomy request APPROVED Mr. " << _target << RESET << std::endl;
	}
    else
        std::cout << BOLD RED "Robotomy Request DENIED" << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}
