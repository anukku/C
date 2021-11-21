#include <stdio.h>
//while(conditie)
int main()
{   
    int i = 6;
    while(i >= 0)
    {
        printf("\nvaloarea lui i este: %i", i);
        i--;
    }
    printf("\nsfarsit while");
    {
        printf("\n echivalenta for while");
        int i;
        for(i = 6; i>0; i--)
        {
            printf("\nvaloarea lui i este: %i", i);
        }

    }

    

    return 0;
}