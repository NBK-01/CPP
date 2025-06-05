#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include "main.h"

class ScalarConverter {
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &cpy);
	ScalarConverter &operator=(const ScalarConverter &cpy);
	////////////////////////////////////////////////////////////
	// Pure virtual destructor to make this class uninstantiable
	virtual ~ScalarConverter() = 0;
	static void convert(const str &literal);
private:
};

/////////////////////////////////////////////////////////////////////
// NOTES:: Other ways to make a class uninstantiable ::			/////
//			1 - Private constructor								/////
//			2 - pure virtual destructor							/////
//			3 - like 2 but any dummy pure virtual function will do //
/////////////////////////////////////////////////////////////////////


#endif // !SCALARCONVERTER_HPP
