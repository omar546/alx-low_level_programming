#!/bin/bash

# This script creates a static library called liball.a from all the .c files in the current directory.

# Compile all the .c files into .o files
gcc -Wall -Wextra -Werror -pedantic -c *.c

# Create the static library from the .o files
ar rcs liball.a *.o

# Cleanup: Remove the .o files
rm *.o