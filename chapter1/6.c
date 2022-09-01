#include <stdio.h>

main() {
    int c;
    int bl;

    bl = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ' && bl == 0) {
            printf(" ");
            ++bl;
        }
        else if (c == ' ' && bl > 0) {
            ++bl;
        }
        else {
            printf("%c", c);
            bl = 0;
        }

    printf("Done! bl ==> %d", bl);
}