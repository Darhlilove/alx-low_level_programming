#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create a static library named liball.a from the compiled object files
ar -rc liball.a *.o

# Index the static library
ranlib liball.a

# Remove the compiled object files
rm *.o
