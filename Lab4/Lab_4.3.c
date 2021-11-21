#include <stdio.h>
#include <stdlib.h>
//#define INTREG int

#define a 4

typedef unsigned int BOOLEAN;
//typedef int INTREG;
int main ()
{
    //operatorul typedef
    BOOLEAN fals = 0, adevarat = !fals;
    BOOLEAN c;

    int b = 5;
    if(a!=b) c = fals;
    else c = adevarat;

    if(c == fals) printf("a si b nu sunt egale");
    else printf("a si b sunt egale");

    return 0;
}