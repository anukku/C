#include <stdio.h>

int main()
{
    char ch = 'A';
    if('A' == 'B')
    printf("\nValoarea lui ch este: %c", ch);
    else
        if('A' == 'A')
        printf("\nValoarea lui ch este: %c", ch);
        else
            if('A' == 'C')
            printf("\nValoarea lui ch este: %c", ch);
            else
            printf("\nNiciunul din cazuri nu este intalnit");
    printf("\nfinal switch");
return 0;
}