# include "./headers/Bureaucrat.h"
# include "./headers/AForm.h"
# include "./headers/PresidentialPardonForm.h"
# include "./headers/RobotomyRequestForm.h"
#include "headers/ShrubberyCreationForm.h"

int main()
{

	std::cout << "\033[33m" << std::endl << "Test ex02 RobotomyRequestForm" << "\033[0m" << std::endl;
	ShrubberyCreationForm Robo_form("I am a robo form");
	Bureaucrat Mr_Robo("Mr_Robo", 45);

	Mr_Robo.executeForm(Robo_form);
	Mr_Robo.signForm(Robo_form);
	Mr_Robo.executeForm(Robo_form);
	Mr_Robo.executeForm(Robo_form);
	Mr_Robo.executeForm(Robo_form);
}
