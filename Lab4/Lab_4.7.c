#include <stdio.h>
int main()
{
    unsigned int a, b, d, c[36]={0};
    int i;
    i=0;
  
  
    printf("BASE 10 TO BASE 2 CONVERTER\n\n");
    printf("Enter the base 10 number:");
    scanf("%u", &a);
    d=a;
  
  
    while (a!=0)
    {
        b=a%2;
        a=a/2;
        c[i]=b;
        i++;
    }
  
  
    printf("\"%d\" in base 10 is equal to \"", d);
    for(i=i-1; i>=0; i--)
        printf("%d", c[i]);
    printf("\" in base 2\n");
  
  
  
  
    return 0;
}