/*
Exercise 3-1.
Write a function expand(s, t) which converts characters like newline and tab 
into visible escape sequences like \n and \t as it copies the string s to t. 
Use a switch.
*/
#include <stdio.h>
#include <string.h>

#define MAXSIZE 100

main () {
    char s[MAXSIZE] = "This is\tthe main sting\n";
    char t[MAXSIZE];
    
    expand(s, t);
}

expand(s, t)
char s[], t[];
{   
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++, j++) {
        switch (s[i])
        {
        case '\n':
            t[j] = '\\';
            t[++j] = 'n';
            break;
        case '\t':
            t[j] = '\\';
            t[++j] = 't';
            break;
        default:
            t[j] = s[i];
            break;
        }
    }
    t[j] = '\0';
    printf("%s", s);
    printf("%s\n", t);
}