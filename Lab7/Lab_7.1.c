#include <stdio.h>
#include <string.h>
int main()

{
    //end of string = terminator de sir : \0 
    char sir[] = "am 18 aniert";
    int i; 

    //strlen
    printf("\nlungimea sirului: %i", strlen(sir));
    for(i = 0; i < strlen(sir); i++)
        printf("\ncaracterul %i este: %c", i, sir[i]);


    //strcpy
    char sursa[] = "Ana are mere";
    char destinatie[] = "Carmen are pere";

    if(strlen(sursa) <= strlen(destinatie))
        strcpy(destinatie, sursa);

    printf("\n%s", destinatie);


return 0;
}