# include "./headers/Bureaucrat.h"
# include "./headers/Form.h"

int main()
{
	std::cout << GREEN "========== FAILURE TEST =========" RESET << std::endl;
	Form form("Form 1", 50, 50);
	Bureaucrat bureaucrat("Bureaucrat 1", 60);
	std::cout << bureaucrat << std::endl;
	std::cout << form << std::endl;
	bureaucrat.signForm(form);

	std::cout << std::endl << GREEN "========== SIGN TEST =========" RESET << std::endl;
	Form form2("Form 2", 50, 50);
	Bureaucrat bureaucrat2("Bureaucrat 2", 40);
	std::cout << bureaucrat2 << std::endl;
	std::cout << form2 << std::endl;
	bureaucrat2.signForm(form2);
	std::cout << form2 << std::endl;


	std::cout << std::endl << GREEN "========== CREATION TEST =========" RESET << std::endl;
	try {Form form3("Form 3", 50, 1111);}
	catch (const except &e) {std::cerr << RED "Exception: could not create form: " << e.what() << RESET << std::endl;}
}
