#include <stdio.h>
#include <string.h>

#define MAXSIZE 100 

main() {
    int i;
    char c;
    char string[MAXSIZE] = "18A9";
    printf("%d\n", htoi(string));
}

atoi(s) /* convert s to integer */
char s[];
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + s[i] - '0';
    return(n);
}

htoi(s) /* convert hex to integer */
char s[];
{
    int i, n, tmp, len;
    int base = 1;

    n = 0;
    len = strlen(s);
    for (i = len--; i >= 0; i--) {
        if (s[i]>='0' && s[i]<='9') {
            tmp += (s[i] - 48) * base;
            base *= 16;
        }
        else if (s[i]>='A' && s[i]<='F') {
            tmp += (s[i] - 55) * base;
            base *= 16;
        }
        else if (s[i]>='a' && s[i]<='f') {
            tmp += (s[i] - 87) * base;
            base *= 16;
        }
    }
    return(tmp);
}