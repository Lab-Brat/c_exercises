/*
Exercise 2-3. Write an alternate version of squeeze(s1, s2) 
which deletes each character in s1 which matches any character in the string s2.
*/
#include <stdio.h>
#include <string.h>

#define MAXSIZE 100 

main() {
    char string[MAXSIZE]    = "cle*==a=n l*i==ne** =";
    char short_str[MAXSIZE] = "*=";
    squeeze(string, short_str);
    printf("%s", string);
}

squeeze(s, c) /* delete all c from s */
char s[];
char c[];
{
  int i, j, k;

  for (i = j = 0; s[i] != '\0'; i++) {
        for (k = 0; c[k] != '\0' && s[i] != c[k]; k++);
        if (c[k] == '\0')
            s[j++] = s[i];
  }

  s[j] = '\0';
}
