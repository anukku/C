#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("Numar de elemente: ");
    scanf("%i", &n);
    int *numar = (int*)malloc(n*sizeof(int));
    for(i = 0; i < n; i++)
    {
        printf("Number %i: ", i + 1);
        scanf("%i", numar + i);
    }
    for(i = n; i > 0; i--)
        printf("%i\n", *numar + i - 1);
    return 0;
}