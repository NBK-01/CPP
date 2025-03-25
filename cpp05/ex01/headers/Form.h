
#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.h"
#include <regex>

class Form
{
	public:
		Form();
		Form(const str name, const int gradeToSign, const int gradeToExec);
		Form(const Form &other);
		Form &operator=(const Form &other);
		~Form();

		// get name
		str getName() const;
		// get signed
		bool getStatus() const;
		// get grade to sign
		int getGradeToSign() const;
		// get grade to exec
		int getGradeToExec() const;
		// set signed
		void beSigned(const Bureaucrat &bureaucrat);

		// Exception class -- throws err if grade is too high 
		class GradeTooHighException : public except
		{
			public:
				virtual const char* what() const throw();
		};
		// Exception class -- throws err if grade is too low
		class GradeTooLowException : public except
		{
			public:
				virtual const char* what() const throw();
		};


	private:
		const str _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExec;
};

// overload << operator
std::ostream & operator<<(std::ostream &out, Form const &form);

#endif // !FORM_H
