#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cctype>

#include "../headers/ScalarConverter.hpp"

static bool isDisplayable(char c) { return std::isprint(static_cast<unsigned char>(c)) != 0; }

static void printChar(double d)
{
	std::cout << "char: ";
	if (std::isnan(d) || d < 0 || d > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(d);
		if (isDisplayable(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
}

static void printInt(double d)
{
	std::cout << "int: ";
	if (std::isnan(d) || std::isinf(d) ||
		d > static_cast<double>(std::numeric_limits<int>::max()) ||
		d < static_cast<double>(std::numeric_limits<int>::min()))
		std::cout << "impossible" << std::endl;
	else
	{
		int i = static_cast<int>(d);
		std::cout << i << std::endl;
	}
}

static void printFloat(double d)
{
	std::cout << "float: ";
	float f = static_cast<float>(d);
	if (std::isnan(f))
		std::cout << "nanf" << std::endl;
	else if (std::isinf(f))
		std::cout << (f > 0 ? "+inff" : "-inff") << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
}

static void printDouble(double d)
{
	std::cout << "double: ";
	if (std::isnan(d))
		std::cout << "nan" << std::endl;
	else if (std::isinf(d))
		std::cout << (d > 0 ? "+inf" : "-inf") << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << d << std::endl;
}

static void printFromChar(char c) {
	printChar(static_cast<double>(c));
	printInt(static_cast<double>(c));
	printFloat(static_cast<double>(c));
	printDouble(static_cast<double>(c));
}

static void printFromInt(int i) {
	printChar(static_cast<double>(i));
	printInt(static_cast<double>(i));
	printFloat(static_cast<double>(i));
	printDouble(static_cast<double>(i));
}

static void printFromFloat(float f) {
	double d = static_cast<double>(f);
	printChar(d);
	printInt(d);
	printFloat(d);
	printDouble(d);
}

static void printFromDouble(double d) {
	printChar(d);
	printInt(d);
	printFloat(d);
	printDouble(d);
}

void ScalarConverter::convert(const std::string& literal) {
	if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'') {
		char c = literal[1];
		printFromChar(c);
		return;
	}

	if (literal == "nan" || literal == "+inf" || literal == "-inf") {
		double d;
		if (literal == "nan")
			d = std::numeric_limits<double>::quiet_NaN();
		else if (literal == "+inf")
			d = std::numeric_limits<double>::infinity();
		else
			d = -std::numeric_limits<double>::infinity();
		printFromDouble(d);
		return;
	}

	if (literal == "nanf" || literal == "+inff" || literal == "-inff") {
		float f;
		if (literal == "nanf")
			f = std::numeric_limits<float>::quiet_NaN();
		else if (literal == "+inff")
			f = std::numeric_limits<float>::infinity();
		else
			f = -std::numeric_limits<float>::infinity();
		printFromFloat(f);
		return;
	}

	if (literal[literal.length() - 1] == 'f') {
		char* endptr = NULL;
		float f = static_cast<float>(std::strtod(literal.c_str(), &endptr));
		if (*endptr == 'f' && *(endptr + 1) == '\0') {
			printFromFloat(f);
			return;
		}
	}

	char* endptrInt = NULL;
	long l = std::strtol(literal.c_str(), &endptrInt, 10);
	if (*endptrInt == '\0' &&
		l >= static_cast<long>(std::numeric_limits<int>::min()) &&
		l <= static_cast<long>(std::numeric_limits<int>::max())) {
		printFromInt(static_cast<int>(l));
		return;
	}

	char* endptrDouble = NULL;
	double d = std::strtod(literal.c_str(), &endptrDouble);
	if (*endptrDouble == '\0') {
		printFromDouble(d);
		return;
	}

	std::cout << "Invalid literal" << std::endl;
}
