
#include "../headers/Form.h"

Form::Form() : _name("Random Form"), _signed(false), _gradeToSign(42), _gradeToExec(42) {}

Form::Form(const str name, const int gradeToSign, const int gradeToExec) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign < GRADE_MAX || gradeToExec < GRADE_MAX)
		throw Form::GradeTooHighException();
	else if (gradeToSign > GRADE_MIN || gradeToExec > GRADE_MIN)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

str Form::getName() const {return _name;}

bool Form::getStatus() const {return _signed;}

int Form::getGradeToSign() const {return _gradeToSign;}

int Form::getGradeToExec() const {return _gradeToExec;}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() >= _gradeToSign)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream &operator<<(std::ostream &out, Form const &form)
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

Form::~Form()
{
	std::cout << BOLD RED "Form " << _name << " has been destroyed." RESET << std::endl;
}
