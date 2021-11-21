#include <stdio.h>

int main()
{
/*    int i = 4;
    for(;i <= 5; i++)
    {
        printf("\n valoarea lui i: %i", i);
    }
*/
    int i = 6, a = 2;
    for(;a%i <= 4;)
    {
        printf("\n restul impartirii este: %i", a%i);
        a++;
    }



    return 0;
}
