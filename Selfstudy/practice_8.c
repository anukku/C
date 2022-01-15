#include<stdio.h>
#include<stdlib.h>
float*a,*b;
void alocare()
{
	a=(float*)malloc(sizeof(float));
	b=(float*)malloc(sizeof(float));
}
void citire()
{
	alocare();
	printf("dati a: ");
	scanf("%f",a);
	printf("dati b: ");
	scanf("%f",b);
}
void afisare()
{
	printf("valorile sunt: a=%.2f, b=%.2f\n",*a,*b);
}
void interschimba()
{
	float c;
	c=*a;
	*a=*b;
	*b=c;
}
void main()
{
	citire();
	afisare();
	printf("\n");
	interschimba();
	afisare();
 
	getchar();
	int k;
	scanf("%d",k);
}