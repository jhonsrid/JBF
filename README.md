# JBF

JBF is a simple bf to C converter, with no optimizations, in a single .c file.

## Features
Very few, this is a C90 program that will convert a valid BF program source file and translate it to C to stdout, that's about it.

## Build

    gcc -Wall -Wextra -Wpedantic -o jbf jbf.c
    gcc -Wall -Wextra -Wpedantic -o jbff jbff.c

Or if you prefer:
    ./build.sh

## Usage

    ./jbf source.bf

or to use the even simpler "filter" version, pipe some source to it, ie:
    cat source.bf | jbff

## Run, compile BF code and run it

    ./jbf source.bf > program.c && gcc -Wall -Wextra -Wpedantic program.c -o program && ./program
Or:
    cat source.bf | jbff > program.c && gcc -Wall -Wextra -Wpedantic program.c -o program && ./program

Or if you prefer:
    ./runjbf.sh source.bf
Or:
    ./runjbff.sh source.bf


## Examples
    ./jbf helloworld.bf
    ./jbf helloworldcommented.bf

(Examples from wikipedia)

## References
https://en.wikipedia.org/wiki/Brainfuck

