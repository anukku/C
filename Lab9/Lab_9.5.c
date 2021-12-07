#include <stdlib.h>
#include <stdio.h>
//alocarea dinamica
//malloc() - memory allocation
//callor() - clear memory allocation

int main()
{
    int *ptr = NULL;
    int n = 10, i;

    //ptr = (int*)malloc(n*sizeof(int));
    ptr = (int*)calloc(n,sizeof(int));
    if(ptr == NULL)
    {
        printf("memorie nealocata\n");
    }
    else
    {   
        for(i = 0; i < n; i++)
            printf("%i, ", ptr[i]);
        printf("\n");
        for(i = 0; i < n; i++)
            ptr[i] = i + 1;
        printf("\n");
        for(i = 0; i < n; i++)
            printf("%i, ", ptr[i]);
        printf("\n");
    }
    printf("\n");
    //realloc() - reallocation

    ptr = (int*)realloc(ptr, 12*sizeof(int));
    for(i = 0; i < 12; i++)
            printf("%i, ", ptr[i]);
        printf("\n");

    free(ptr);

    return 0;
}