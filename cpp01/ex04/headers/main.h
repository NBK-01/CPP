#ifndef MAIN_H
#define MAIN_H

#include <string>
#include <iostream>
#include <fstream>

typedef std::string str;

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

#define USAGE "Usage: ./Sed <file> <string1> <string2>"
#define FILE_ERROR "Error: File not found"
#define FILE_ERROR2 "Error: Permission denied"
#define FILE_ERROR3 "Error: File is a directory"
#define FILE_ERROR4 "Error: File is empty"

#endif
