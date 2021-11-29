#include <stdio.h>

int main()
{
    float vec[51];
    int i,n,t=0;
    float s;
    scanf("%i", &n);
    for(i=0;i<n;i++)
        scanf("%f", &vec[i]);
    for(i=0;i<n;i++)
    {
    	if((int)vec[i]%7==0)
    	{
       		s=s+vec[i];
       		t++;
       	}
	}
    printf("Media aritmetica a numerelor a caror valoare este div cu 7 este %.2f",s/t);
    return 0;
}