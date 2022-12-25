cat $1 | ./jbff > program.c && gcc -Wall -Wextra -Wpedantic program.c -o program && ./program
