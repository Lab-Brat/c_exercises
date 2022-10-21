/*
Exercise 2-10. 
Rewrite the function lower, 
which converts upper case letters to lower case, 
with a conditional expression instead of if-else.
*/
#include <stdio.h>

main() {
    int c;
    c = 'F';

    printf("%c\n", lower(c));
}

lower(a) 
int a; 
{   
    return ((a >= 65) && (a <= 90)) ? (a + 32) : a ;
}