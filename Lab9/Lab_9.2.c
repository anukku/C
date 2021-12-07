#include <stdio.h>

int main()
{
    //pointer constant

    int a = 2, b = 4;
    int *const pA = &a; 
    printf("\nvaloarea lui pA: %i, valoarea de la adresa indicata de pA: %i", pA, *pA);

    pA = &b;

    return 0;
}