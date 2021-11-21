#include <stdio.h>
#include <stdlib.h>
//daca e mai mare ca 0 sa verific daca e par sau nu, daca nu e mai mare ca 0 afisez
int main ()
{
    int a ;
    printf("\n numarul a este: ");
    scanf("%i", &a);
    if(a > 0)
    {
        if(a % 2 == 0) printf("\n a este par");
        else printf("\n a este impar");
    }   
    else printf("\n numarul este mai mic decat 0");
    return 0;
}