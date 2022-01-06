#include <stdlib.h>
#include <stdio.h>
// void *calloc(size_t n, size_t n);
// int *ptr = (int *)calloc(10, sizeof(int)); calloc CLEAR ALLOCATION
// int *ptr = (int *)malloc(10*sizeof(int)); malloc WITH GARBAGE ALLOCATION
// realloc - modifica dimensiunea unui block fara a pierde datele din block ul initial
//int *ptr = (int *)malloc(sizeof(int));
//ptr = (int *)realloc(ptr, 2*sizeof(int));
int main()
{
    int i;
    int *ptr = (int *)malloc(2*sizeof(int));// 2*sizeof(int) = 8 BYTES de memorie

    if(ptr == NULL)
    {
        printf("Memory not available!");
        exit(1);
    }

    printf("Enter the two numbers: \n");
    for(i = 0; i < 2; i++)
    {
        scanf("%d", ptr + i);
    }
    //MEMORY ALLOCATION FOR 2 MORE INTEGERS
    ptr = (int *)realloc(ptr, 4*sizeof(int));// pentru ca vreau inca 2 block-uri de memorie o sa am (2+2)*sizeof(int)
    if(ptr == NULL)
    {
        printf("Memory not available!");
        exit(1);
    }
    printf("Enter 2 more integers: \n");
    for(i = 2; i < 4; i++)
        scanf("%d", ptr + i);
    for(i = 0; i < 4; i++)
        printf("%d ", *(ptr + i));
    return 0;
}