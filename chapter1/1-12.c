#include <stdio.h>

main() {
    int c, len, nwhite;

    nwhite = len = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
            printf("word length is %d\n", len);
            len = 0;
        }
        else 
            ++len;
}