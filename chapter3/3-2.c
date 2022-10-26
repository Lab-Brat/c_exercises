/*
Exercise 3-2.
Write a function expand(s1 , s2) which expands shorthand notations like a-z 
in the string s1 into the equivalent complete list abc...xyz in s2.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXSIZE 100

main () {
    int i;
    char s1[100] = "a-z";
    char s2[100];
    
    expand(s1, s2);
}

expand(s1, s2)
char s1[], s2[];
{
    int i, j;
    int start, end;
    
    for (i = 0; s1[i] != '\0'; i++)
    {
        switch (s1[i])
        {
        case '-':
            printf("%c Is dash\n", s1[i]);   
            break;         
        case 65 ... 90:
            printf("Is capital letter\n");
            break;
        case 97 ... 122:
            printf("%c Is lower letter\n", s1[i]);
            break;
        }
    }
}
