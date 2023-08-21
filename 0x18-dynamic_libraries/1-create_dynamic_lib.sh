#!/bin/bash

# Compile all .c files into object files
gcc -c -Wall -Werror -fpic *.c

# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o

# Print a success message
echo "Dynamic library liball.so created successfully!"
