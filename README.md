# JBF

JBF is a simple bf to C converter, with no optimizations, in a single .c file.

## Features
Very few, this is a C90 program that will convert a valid BF program source file and translate it to C to stdout, that's about it.

## Build

    gcc -Wall -Wextra -Wpedantic -o jbf jbf.c

Or if you prefer:
    ./build.sh

# Usage

    ./jbf source.bf

# Run, compile BF code and run it

    ./jbf source.bf > program.c && gcc -Wall -Wextra -Wpedantic program.c -o program && ./program

Or if you prefer:
    ./run.sh source.bf
