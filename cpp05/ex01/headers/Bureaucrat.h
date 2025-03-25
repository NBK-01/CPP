#ifndef  BUREAUCRAT_H
# define BUREAUCRAT_H

#pragma once

#include <string>
#include <iostream>
#include <ostream>
#include <exception>

class Form;

typedef std::string str;
typedef std::exception except;

#define RESET        "\e[0m"
#define BOLD         "\e[1m"
#define UNDERLINE    "\e[4m"
#define CLEAR		 "\e[H\e[2J"

#define BLACK        "\e[30m"
#define RED          "\e[31m"
#define GREEN        "\e[32m"
#define YELLOW       "\e[33m"
#define BLUE         "\e[34m"
#define MAGENTA      "\e[35m"
#define CYAN         "\e[36m"
#define WHITE        "\e[37m"
#define GRADE_MIN	 150
#define GRADE_MAX	 1

class Bureaucrat
{
	private:
		const str _name;
		int _grade;
	public:
		// default constructor for bureaucrat
		Bureaucrat();
		// constructor for bureaucrat
		Bureaucrat(str _name, int _grade);
		// destructor for bureaucrat
		~Bureaucrat();
		// copy and assignation operator for bureaucrat
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat & operator=(Bureaucrat const &other);
		// Exception class -- throws err if grade is too high 
		class GradeTooHighException : public except
		{
			public:
				virtual const char* what() const throw();
		};
		// Exception class -- throws err if grade is too high 
		class GradeTooLowException : public except
		{
			public:
				virtual const char* what() const throw();
		};

		// getters and setters
	// get name
		str getName() const;
	// get grade
		int getGrade() const;
	// increment grade
		void increment();
	// decrement grade
		void decrement();
	// sign form
		void signForm(Form &form);
};

// overload << operator
std::ostream & operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif // 
