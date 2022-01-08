//gasirea minimului si maximului dintr-un sir cu pointeri
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void minmax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
    int i;
    for(i = 1; i < len; i++)
    {
        if(arr[i] < *min)
        *min = arr[i];
        if(arr[i] > *max)
        *max = arr[i];
    }
}
int main()
{
    //int a[100];
    //scanf("%d", a);
    //int i;
    //for(i = 0; i < 5; i++)
    //scanf("%d", &a[i]);
    int a[] = {23, 43, 43, 222, 31, 2};
    int min, max;
    int len = sizeof(a)/sizeof(a[0]); //lenght of the array
    minmax(a, len, &min, &max);
    printf("Valoarea minima din sir: %d\nValoarea maxima din sir: %d", min, max);
    return 0;
}