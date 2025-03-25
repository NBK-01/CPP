#include "../headers/PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5), _target("Presidential Target") {}

PresidentialPardonForm::PresidentialPardonForm(const str target) : AForm("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), _target(other._target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		_target = other._target;
	}
	return *this;
}

void PresidentialPardonForm::action() const
{
	std::cout << BOLD GREEN << _target << " has been pardoned by Zafod Beeblebrox." RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
