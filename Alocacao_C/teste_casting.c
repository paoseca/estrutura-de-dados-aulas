#include <stdio.h>

int main () {
    int a = 18;
    int b = 4;

    printf ("18 / 4 = %d\n", a/b );  
    printf ("18 / 4 = %f\n", a/b );

    printf ("18f / 4 = %.1f\n", (float)a/b);

    return 0;
}