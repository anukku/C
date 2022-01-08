#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{   
    int i = 10;
    int *p = &i;
    printf("\nThe address of a variable i is %p", p);
    int n = *p;
    printf("\nThe number at the address is %d", n);
    p = &i;
    printf("\nAdresa din p este %d", p);
    return 0;
}