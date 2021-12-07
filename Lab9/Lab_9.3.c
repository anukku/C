#include <stdlib.h>
#include <stdio.h>
//pointer NULL
int main()
{
    char *pNull = NULL;
    char ch;

    pNull = &ch;
    *pNull = 'A';
    scanf("%c", pNull);

    printf("\n adresa din pNull: %i, valoarea intreaga: %i, caracterul: %c", pNull, *pNull, *pNull);



    return 0;
}