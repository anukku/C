#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //operatorul de secventiere
    int a = 2, b = 4, c = 4;
    a = b -= 3, --c, a+=4;
    printf("valorile pentru a: %i, b: %i, c: %i", a, b, c);

    return 0;
}