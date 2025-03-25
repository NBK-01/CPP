#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "AForm.h"


class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const str target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();

		class FileError: public except
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		virtual void action() const;
		str _target;
};

#endif // !SHRUBBERYCREATIONFORM_H
