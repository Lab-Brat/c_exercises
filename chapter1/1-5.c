#include <stdio.h>

main() {
    int c;
    int bl, nl, tb;

    bl = nl = tb = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ')
            bl++;
        else if (c == '\n')
            nl++;
        else if (c == '\t')
            tb++;
    
    printf("\nTotal Blanks   : %d\n", bl);
    printf("\nTotal New Lines: %d\n", nl);
    printf("\nTotal Tabs     : %d\n", tb);

}