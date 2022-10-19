/* 
Exercise 2-2. Write the function htoi(s), 
which converts a string of hexadecimal digits into its equivalent integer value. 
The allowable digits are 0 through 9, a through f, and A through F. 
*/
#include <stdio.h>
#include <string.h>

#define MAXSIZE 100 

main() {
    int i;
    char c;
    char string_bin[MAXSIZE] = "255";
    char string_hex[MAXSIZE] = "18A9";

    printf("%d\n", atoi(string_bin));
    printf("%d\n", htoi(string_hex));
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