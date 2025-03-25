#include "../headers/Bureaucrat.h"
#include <ostream>


// default constructor for bureaucrat
Bureaucrat::Bureaucrat() : _name("Random Bureaucrat"), _grade(42) {}

// constructor for bureaucrat
Bureaucrat::Bureaucrat(str name, int grade) : _name(name), _grade(grade)
{
	if (grade < GRADE_MAX)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > GRADE_MIN)
		throw Bureaucrat::GradeTooLowException();
}

// copy constructor for bureaucrat
Bureaucrat::Bureaucrat(Bureaucrat const &other) {*this = other;}

// assignment operator for Bureaucrat
Bureaucrat & Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
		_grade = other.getGrade();
	return *this;
}

// destructor for bureaucrat
Bureaucrat::~Bureaucrat()
{
	std::cout << BOLD RED "Bureaucrat " << _name << " has been destroyed." RESET << std::endl;
}

// getters and setters
str Bureaucrat::getName() const {return _name;}

int Bureaucrat::getGrade() const {return _grade;}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &other)
{
	out << other.getName() << YELLOW ", bureaucrat grade " << other.getGrade() << "." RESET << std::endl;
	return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

void Bureaucrat::increment()
{
	if (_grade != GRADE_MAX)
		_grade--;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decrement()
{
	if (_grade != GRADE_MIN)
		_grade++;
	else
		throw GradeTooLowException();
}
