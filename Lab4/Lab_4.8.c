#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, D, C;
    printf("\nPrimul numar este: ");
    scanf("%i", &a);
    printf("\nAl doilea numar este: ");
    scanf("%i", &b);
    D = a|b;
    C = a&b;
    printf("\nRezultatul este: ");
    printf("%i, %i", D, C);
}