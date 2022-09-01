#include <stdio.h>

main() {
    int c;
    
    while ((c=getchar()) != EOF)
        printf("%c", lower(c));
}

lower(a) 
int a; 
{   
    if ((a >= 65) && (a <= 90))
        a = a + 32; 
    return a;  
}