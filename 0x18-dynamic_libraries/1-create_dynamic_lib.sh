#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -c -fpic *.c

# Create a dynamic library from the object files
gcc -shared -o libdynamic.so *.o

# Clean up by removing the object files
rm -f *.o

echo "Dynamic library liball.so has been created."
