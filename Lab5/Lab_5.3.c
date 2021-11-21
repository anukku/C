#include <stdio.h>

int main()
{
    char ch = 'a';
    int var = -2, nrTreceri = 0;

intrare:
    printf("\n Valorile lui ch si lui var sunt: %c, %i", ch, var);

    if((var&ch) != 96)
    {
        printf("\n Rezultatul din if: %u", var&ch);
        nrTreceri ++;
        goto final;
    }
    else goto final;
final:
    printf("\n Valoarea lui var: %i", var);

    printf("\n Numarul de treceri: %i", nrTreceri);


    return 0;
}






//goto - instructiune salt
//goto label;