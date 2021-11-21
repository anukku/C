#include <stdio.h>

int main()
{
    float vect[8];
    int i;

    for(i = 0; i <= 7; i++)
    {
        printf("elementul %i cu indexul %i este: ", i+1, i);
        scanf("%f", &vect[i]);
    }

    for(i = 0; i < 8; i++) 
    {
        printf("\nelementul %i cu indexul %i este: %f", i + 1, i, vect[i]);
    }
    

    return 0;
}
//
//
//