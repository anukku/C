#include <stdio.h>

int main()
{
    int a = 10;
    a = 100;
    goto mylabel;

mylabel:
    printf("a=%d", a);

    return 0;
}