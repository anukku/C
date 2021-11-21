#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, c = 4;
    float b = 23.5;
//operatorul de conversie explicit
    a =(int) (b / 3 * (c>0? c : c--));

    printf("caloarea lui a: %i", a);
    return 0;
}