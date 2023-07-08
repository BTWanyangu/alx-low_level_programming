#!/bin/bash

# Compile the .c files into object files
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

# Create the static library liball.a
ar -rc liball.a *.o

# Index the static library
ranlib liball.a
