#include<stdio.h>
#include<stdlib.h>
void main()
{
    double *a, *b, *c;

    a = (double*)malloc(sizeof(double));

    printf("\nIntroduceti a: ");
    scanf("%lf", a);

    b = (double*)malloc(sizeof(double));

    printf("\nIntroduceti b: ");
    scanf("%lf", b);

    c = a; //c ia valoarea lui a
    a = b; //a ia valoarea lui b
    b = c; //b ia valoarea lui c
    printf("dupa interschimbare : a = %.2lf\tb = %.2lf", *a, *b);

    free(a);
    free(b);

    getchar();
	int k;
	scanf("&d", k);

}