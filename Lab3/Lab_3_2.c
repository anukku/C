#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    a = 3; b = 5;
    printf("\n operatori logici pe bit: and %u, or %u, xor %u, negatie %u, complement fata de 1: %d", a&b, a|b, a^b, !a, ~a );
    // a-= 1 ;
    // printf("\n complement fata de 1: %d", ~a);
    // a= ~ --a;
    // printf("\n complement fata de 1: %d", ~--a);
    return 0;
}