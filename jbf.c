#include <stdio.h>
/* #include <stdlib.h> */

#define JBFVER "1.0.0"

static void dump(FILE *fp)
{
    int c;
    printf("/* Created by JBF version: %s */\n#include <stdio.h>\nint main() {\nchar array[30000] = {0}; char *ptr = array;\n", JBFVER);

    while((c = getc(fp)) != EOF)
    {
        switch(c)
        {
            case '>':
                printf("++ptr;\n"); break;
            case '<':
                printf("--ptr;\n"); break;
            case '+':
                printf("++*ptr;\n"); break;
            case '-':
                printf("--*ptr;\n"); break;
            case '.':
                printf("putchar(*ptr);\n"); break;
            case ',':
                printf("*ptr = getchar();\n"); break;
            case '[':
                printf("while (*ptr) {\n"); break;
            case ']':
                printf("}\n"); break;
            default:
                break;
        }
    }
    printf("return 0; }\n");
}

int main(int argc, char *argv[])
{
    FILE *fp;

    if (argc <= 1) {
        fprintf(stderr, "Usage: bf sourcefile\n");
        return 1;
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Error opening file\n");
        return 1;
    }

    dump(fp);
    fclose(fp);
}
