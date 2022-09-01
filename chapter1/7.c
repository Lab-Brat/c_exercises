#include <stdio.h>

main() {
    int c;
    int bl;

    bl = 0;
    while ((c=getchar()) != EOF) {
        if (c == ' ' && bl > 0)
            ++bl;
        else if (c == ' '){
            printf("%c", c);
            ++bl;
        }
        else {
            printf("%c", c);
            bl = 0;
        }
    }
}