#include <stdio.h>

int main()
{
    float vec[51];
    int i,n,c=0;
    float s;
    scanf("%i", &n);
    for(i=0; i<n; i++)
        scanf("%f", &vec[i]);
    for(i=0; i<n; i++)
    {
        if((int)vec[i] % 7 == 0)
        {
            s=s+vec[i];
            c++;
        }
    }
    if(c != 0)
    printf("%.2f", s/c);
    else printf("0");
    printf("Media aritmetica %.2f", s/c);
    return 0;
}