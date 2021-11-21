#include <stdio.h>

int main()
{
    char ch = 'A';
    switch(ch)
    {
        case 'B':
        {
            printf("\n Valoarea lui ch este: %c", ch);
            break;
        }
        case 'A':
        {
            printf("\n Valoarea lui ch este: %c", ch);
            break;
        }
        case 'C':
        {
            printf("\n Valoarea lui ch este: %c", ch);
            break;
        }
        default:
        {
            printf("\n Niciunul din cazuri nu este intalnit");
        }    
    }
    printf("\n final switch");
    return 0;
}
//break opreste executia brusc a corpului de instructiuni respectiv
//daca nu am break se repeta "Valoarea lui ch este: A" pentru fiecare caz
