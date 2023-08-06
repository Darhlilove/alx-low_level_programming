#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create a static library named liball.a from the compiled object files
ar -rc liball.a *.o
