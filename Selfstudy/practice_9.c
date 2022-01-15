// Find the largest element using Dynamic Memory Allocation
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{   
    int n, i;
    int *element;
    printf("Numarul de elemente: ");
    scanf("%i", &n);
    element = (int*)calloc(n,sizeof(int));
    if (element == NULL)
        printf("Memorie nealocata!");
    for(i = 0; i < n; ++i)
        {
        printf("Number %i: ", i + 1);
        scanf("%i", element + i);
        }
    for(i=1;i<n;++i)  
    {
       if(*element<*(element+i)) 
           *element=*(element+i);
    }
    printf(" The Largest element is :  %i \n\n",*element);
    return 0;
}
