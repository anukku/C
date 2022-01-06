#include <stdlib.h>
#include <stdio.h>
//(void* )malloc(size_t size) creeaza un bloc de memorie de dimensiunea specificata si returneaza un pointer primului byte al memoriei alocate altfel returneaza NULL
//int *ptr = (int* )malloc(4)
int main()
{
    int i, n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int *ptr = (int *)/* int* returneaza pointerul din void in int */malloc(n*sizeof(int))/* dimensiunea a n intregi */;
    if(ptr == NULL)
    {
        printf("Memory not available.");
        exit(1);
    }
    for(i = 0; i < n ; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", ptr + i); /* ptr contine adresa primului byte din memorie si adaug i pentru ca fiecare element sa fie salvat in alta adresa *//* NU FOLOSESC & PENTRU CA PTR + I E DEJA O ADRESA */
    }
    for(i = 0; i < n; i++)
        printf("%d ", *( ptr + i ));
    return 0;
}