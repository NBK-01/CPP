#!/bin/bash

# usage check
if [ -z "$1" ]; then
  echo "Usage: $0 <Project name> <ClassName>"
  exit 1
fi

PROJ_NAME=$1
CLASS_NAME=$2
DIR_NAME="${PROJ_NAME}"

mkdir -p "$DIR_NAME"
cd "$DIR_NAME" || exit 1

# header file creation
cat <<EOL > "$CLASS_NAME.hpp"
#ifndef ${CLASS_NAME^^}_HPP
#define ${CLASS_NAME^^}_HPP

#include <iostream>
#include <string>

class $CLASS_NAME {
public:
    // Constructor
    $CLASS_NAME();

    // Destructor
    ~$CLASS_NAME();

	// Copy constructor
	$CLASS_NAME(const $CLASS_NAME& other)

	// Assignment operator
	$CLASS_NAME& operator=(const $CLASS_NAME& other);

    // Public methods

private:
    // Private vars
    std::string _name;
};

#endif // ${CLASS_NAME^^}_HPP
EOL

# classname src file creation
cat <<EOL > "$CLASS_NAME.cpp"
#include "${CLASS_NAME}.hpp"

// Constructor implementation
$CLASS_NAME::$CLASS_NAME()
{
	std::cout << "Default constructor for $CLASS_NAME" << std::endl;
}

// Destructor implementation
$CLASS_NAME::~$CLASS_NAME() {
	std::cout << "Destructor for $CLASS_NAME" << std::endl;
}

// Copy constructor implementation
/* implement your own copy constructor -- sorry :( */

// Assignment operator implementation
/* implement your own assignment op -- sorry :( */

EOL

# Create the main file (main.cpp)
cat <<EOL > "main.cpp"
#include "${CLASS_NAME}.h"

int main() {
    return 0;
}
EOL

# Optionally create a Makefile to build the project
cat <<EOL > "Makefile"
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SOURCES = main.cpp ${CLASS_NAME}.cpp
OBJECTS = \$(SOURCES:.cpp=.o)
EXEC = ${CLASS_NAME}

\$(EXEC): \$(OBJECTS)
	\$(CXX) \$(CXXFLAGS) -o \$(EXEC) \$(OBJECTS)

%.o: %.cpp
	\$(CXX) \$(CXXFLAGS) -c \$<

clean:
	rm -f \$(EXEC) \$(OBJECTS)
EOL

echo "All done, thanks for using this script"
