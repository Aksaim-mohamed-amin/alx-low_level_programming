#!/bin/bash

# Compail all the files with the .c extension using a for loop
for file in *.c
do
    gcc -Wall -Werror -Wextra -pedantic -c "$file"
done

# Create the static library
ar -rcs liball.a *.o

# Creating index for the library
ranlib liball.a

# Delet the .o files
rm *.o
