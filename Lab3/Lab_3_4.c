#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d;
    a = 3;
    b = 12;
    c = 5;
    d = (a<<3) + b/((c == 3)?c+1 : c - 1);
    printf("valoarea lui d este: %d", d);

    return 0;
}