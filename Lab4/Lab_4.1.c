#include <stdio.h>
#include <stdlib.h>

int main()
{
    //operatorul de atribuire
    int a = 2, b = 4, x, y, z, R;
    //a = (a*(b-a))>>2 & 15;
    x = b - a;
    y = a * x;
    z = y >> 2;
    R = z & 15;
    printf("valoarea lui a: %i", R);

    return 0;
}