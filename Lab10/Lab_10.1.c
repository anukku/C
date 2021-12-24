#include <stdlib.h>
#include <string.h>
#include <stdio.h>
//string de la tastatura(un cuvant), numarul de vocale, salvez adresa stringului intr-un pointer
int main()

{
char sir[100];
char vocale[]="AEIOUaeiou";
int i,j,nrvocale = 0; 
    scanf("%s", & sir);
    for(i = 0; i < strlen(sir); i++)
    {
        if (strchr(vocale,sir[i]))
            nrvocale++;
    }
    printf("%i",nrvocale);
return 0;
}