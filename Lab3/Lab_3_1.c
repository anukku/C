#include <stdio.h>
#include <stdlib.h>

int main()
{/*blocul de intructiuni 1

    int a = 10;   

    {//blocul de intructiuni 2   
        char ch = 'A';
        printf("Variabila din blocul 2 este: %c", ch);
        printf("\n Variabila din blocul 1 este: %i", a);
    }

    printf("Variabila din blocul 2 este: %c", ch);
    */
    int a,b;
    printf("Primul numar este: ");
    scanf("%i", &a);
    printf("Al doilea numar este: ");
    scanf("%i", &b);
    int sum, min;
        sum = a + b;
    
    //operatori aritmetici: +, -, *, %, /
    //peratori de comparatie: <, >, <=, >=, ==, !=
    //operatorii de increm/devremm: ++, --
    //operatorul conditional: conditie ? expre1 : expr2
    
    min = a < b ? a : b;
    printf("Minimul dintre a si b este: %i", min);

    printf("\n Valoarea lui a: %i", a++);
    printf("\n Valoarea lui a: %i", ++a);
    
    //a = a + 10;
    a += 10; // *= -= etc.
    printf("\n valoarea lui a: ", a);

    if(a<b)
    {
        printf("Maximul este: %i", b);

    }
    else
    {
        printf("Maximul este: %i", a);
    }


    if(a == 15 && b == 4)
    {
        printf("\n conditiile sunte respectate");
    }
    //operatori logici pe bit: and %u, or %u, xor %u, negatie %u, complement fata de 1: %u, a&b, a|b, a^b, !a, ~a
    
    return 0;
}