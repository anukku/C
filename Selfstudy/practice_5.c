#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a[] = {1, 2, 3 ,4 ,5};
    int n = sizeof(a)/sizeof(a[0]);/* lungimea sirului */
    printf("Lungimea sirului este de %d elemente!", n);
    int *mid = findMid(a, n);
    printf("%d", *mid);
    return 0;
}
int *findMid(int a[], int n)
{
    return &a[n/2]; /* returnez adresa elementului pe pozitia 2, adica adresa lui 3 */
}