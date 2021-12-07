#include <stdio.h>

void medie(int a, int b, float *m);

int main()
{
    int x = 10, y = 20;
    int *pX= &x, *pY=&y;
    float z;

    printf("\nadresa z: %i, valoare z: %f", &z,z);
    medie(*pX,*pY,&z);
    printf("\nadresa z: %i, valoare z: %f", &z,z);
    return 0;
}

void medie(int a, int b, float *m)
{
    
    *m = (float)(a + b) / 2;

    return m;
}