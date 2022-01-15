#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, nr = 0, poz = 0, neg = 0, i, nr_dorit, valoare_adevar = 0; 
    int *p = NULL;
    p = (int*)malloc(1*sizeof(int));
    scanf("%i", &x);
    while(x > -1000)
    {
        p = (int*)realloc(p,(nr+1)*sizeof(int));
        p[nr] = x;
        nr++;
        if(p[nr] >= 0)
            poz++;
        else
            neg++;
        scanf("%i", &x);
    }
    printf("Numarul dorit:");
    scanf("%i", &nr_dorit);
    for(i = 0; i < nr; i++)
        if(p[i] == nr_dorit)
            {
                nr_dorit = i + 1;
                valoare_adevar = 1;
                break;
            }
    if(valoare_adevar == 0)
        printf("\nNu exista!");
    else
        printf("\nPozitia elementului este: %i", nr_dorit);
    printf("\nElemente negative: %i", neg);
    printf("\nElemente pozitive: %i", poz);
    free(p);
    return 0;
}