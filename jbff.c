#include <stdio.h>
int main() {
    int c;
    printf("#include <stdio.h>\nint main() {\nchar a[30000] = {0}; char *p = a;\n");
    while((c = getc(stdin)) != EOF) {
        switch(c) {
            case '>': printf("++p;\n"); break;
            case '<': printf("--p;\n"); break;
            case '+': printf("++*p;\n"); break;
            case '-': printf("--*p;\n"); break;
            case '.': printf("putchar(*p);\n"); break;
            case ',': printf("*p = getchar();\n"); break;
            case '[': printf("while (*p) {\n"); break;
            case ']': printf("}\n"); break;
        }
    }
    printf("return 0;}\n");
    return 0;
}
