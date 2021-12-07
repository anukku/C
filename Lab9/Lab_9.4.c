#include <stdlib.h>
#include <stdio.h>

int main()
{
    int vect[4];
    int i;
    int *pV=vect;

    for(i = 0; i < 4; i++)
    {
        scanf("%i", &vect[i]);
    }

    for(i = 0; i < 4; i++)
    {
        printf("\n%i,%i,%i,%i ", vect[i],*(vect+i),pV[i],*(pV+i));
    }

    int var, *p;
    p = &var;
    printf("\n%i", sizeof(int));
    printf("\n%i, %i", p, p + 5);




    return 0;
}