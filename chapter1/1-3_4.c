#include <stdio.h>

#define START 300
#define STOP  0
#define STEP  20

main() {
    int i;
    for (i=START; i>STOP; i=i-STEP) {
        printf("%4dC ===> %6.1fF\n", i, ((i*1.8)+32));
    }
}