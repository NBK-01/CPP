
#include "../headers/AForm.h"

AForm::AForm() : _name("Random Form"), _signed(false), _gradeToSign(42), _gradeToExec(42) {}

AForm::AForm(const str name, const int gradeToSign, const int gradeToExec) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign < GRADE_MAX || gradeToExec < GRADE_MAX)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > GRADE_MIN || gradeToExec > GRADE_MIN)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

str AForm::getName() const {return _name;}

bool AForm::getStatus() const {return _signed;}

int AForm::getGradeToSign() const {return _gradeToSign;}

int AForm::getGradeToExec() const {return _gradeToExec;}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() >= _gradeToSign)
		throw AForm::GradeTooLowException();
	else
		_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form not signed!");
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (_signed == false)
		throw FormNotSignedException();
	if (_gradeToExec< executor.getGrade())
		throw GradeTooLowException();
	action();
}

std::ostream &operator<<(std::ostream &out, AForm const &form)
{
    out << "-------------------------------------\n"
        << "| " << BLUE << "Form Attributes" << RESET << "               |\n"
        << "-------------------------------------\n"
        << "| " << YELLOW << "Name:" << RESET << "          " << form.getName() << "\n"
        << "| " << YELLOW << "Signed:" << RESET << "        " << (form.getStatus() ? GREEN "Yes" RESET : RED "No" RESET) << "\n"
        << "| " << YELLOW << "Grade to Sign:" << RESET << " " << form.getGradeToSign() << "\n"
        << "| " << YELLOW << "Grade to Exec:" << RESET << " " << form.getGradeToExec() << "\n"
        << "-------------------------------------" << std::endl;
    return out;
}

AForm::~AForm()
{
	std::cout << BOLD RED "Form " << _name << " has been destroyed." RESET << std::endl;
}
