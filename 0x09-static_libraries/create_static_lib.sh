#!/bin/bash

# Create a static library called liball.a from all .c files in the current directory

# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library from the .o files
ar -rc liball.a *.o

# Index the library for efficient symbol lookup
ranlib liball.a

# Clean up the .o files
rm *.o
