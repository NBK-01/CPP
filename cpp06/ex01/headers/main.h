
#ifndef MAIN_H
# define MAIN_H


#pragma once

#include <string>
#include <iostream>
#include <ostream>
#include <exception>

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

#endif // !MAIN_H
