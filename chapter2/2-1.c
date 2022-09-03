#include <stdio.h>

#define MAXLINE 1000 

main()
{
    int len;
    int max;
    char line[MAXLINE];
    char save[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
        printf("line len = %d\n", len);
}

get_line(s, lim) 
char s[];
int lim;
{
    int c, i;

    /* for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) 
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    } */

    for (i = 0; (c=getchar())!=EOF; i++) {
        if (i>lim-1)
            break;
        if (c!='\n')
            s[i] = c;
        else
            break;
    }
    
    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    /* i = 0;
    while ((c=getchar()) != EOF) {
        if (i<lim-1)
            i++;
        else
            break;
        
        if (c!='\n')
            s[i] = c;
        else
            break;
    } */
    
    s[i] = '\0';
    return(i);
}
