#include <stdio.h>

#define YES 1
#define NO  0

main()
{
    int c, nl, nw, nc, inword;

    inword = NO;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n' ){
            ++nl;
            printf("\n");
        }
        if (c == ' ' || c == '\n' || c == '\t' ) {
            inword = NO;
            printf("\n");
        }
        else if ( inword == NO ) {
            inword = YES;
            printf("%c", c);
            ++nw;
        }
        else if ( inword == YES )
            printf("%c", c);
    }
}