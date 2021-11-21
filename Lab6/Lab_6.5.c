#include <stdio.h>
//vector de [10] sa afiseze elementele pare
int main()
{
    int vect[10];
    int i;
    int MAX = -99999999;
    
    for(i = 0; i <= 9; i++)
    {
        printf("elementul %i cu indexul %i este: ", i+1, i);
        scanf("%i", &vect[i]);
    }
    
    for(i = 0; i <= 9; i++)
    {
        if(vect[i] % 2 == 0)
        {
            printf("\n vectorul %i este par", vect[i]);
        }
        else
            printf("\n vectorul %i este impar", vect[i]);
    }
            
    for(i = 0; i <= 9; i++)
    {
        if(vect[i] > MAX)
            MAX = vect[i];
        else
            printf("\n maximul este: %i", MAX);
    }
    printf("\n vectorul cu indexul maxim este: %i ", MAX);
    
    return 0;
    
}