#include <stdio.h>
#include <string.h>
int main()
{
//strcmp
int val;
char sir1[] = "ana are pere";
char sir2[] = "Ana are pere";


val = strcmp(sir1,sir2);
printf("\nvaloarea strcmp: %i", val);

if(val < 0) printf("\nsir1<sir2");
else if(val > 0) printf("\nsir1>sir2");
else printf("\nsir1 = sir2");

    return 0;
}