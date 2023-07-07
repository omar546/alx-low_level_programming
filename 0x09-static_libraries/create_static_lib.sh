#!/bin/bash

# a script that creates a static library
# called liball.a from all the .c files
# that are in the current directory

# Compile each .c file into .o object files
gcc -c *.c

# Create the static library liball.a from the .o object files
ar rcs liball.a *.o

# List the contents of the created library
ar -t liball.a

# Remove the temporary .o object files
rm *.o