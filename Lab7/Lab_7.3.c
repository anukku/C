//sir de caractere introdus de la tastatura vocale mici sa fie mari, vocale mari raman asa, consoane mari sa fie mici, consoane mici raman asa
#include <stdio.h>
#include <string.h>
int main()
{
    char sir[100];
    int i; 

    scanf("%[^\n]s", & sir);
    for(i = 0; i < strlen(sir); i++)
    {
        if(sir[i] == 'a' || sir[i] == 'e' || sir[i] == 'i' || sir[i] == 'o' || sir[i] == 'u')
        sir[i]-=32;

        else if(sir[i] == 'A' || sir[i] == 'E' || sir[i] == 'I' || sir[i] == 'O' || sir[i] == 'U')
        continue;

        else if(sir[i] >= 65 && sir[i] <= 90)
        sir[i]+=32;
    }
    printf("\n%s", sir);
    
    return 0;
}