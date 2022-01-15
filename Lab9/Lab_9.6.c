//vector n, parcurg cu un for, si salvez elementele pare, in vector raman doar elementele pare, la final realocare cu vectorul cu elementele pare
//vector n, parcurg cu un for, si salvez elementele pare, in vector raman doar elementele pare, la final realocare cu vectorul cu elementele pare
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *ptr = NULL;
    int n, i, k = 0;
	scanf("%i", &n);
    ptr = (int*)malloc(n*sizeof(int));
	if(ptr == NULL) 
		printf("Memorie nealocata.");
	else
	{
	    for(i=0;i<n;i++)
		    scanf("%i", &ptr[i]);//ptr + i
        for(i=0;i<n;i++)
            if(ptr[i]%2==0)
            {
                ptr[k]=ptr[i];
                k++;
            }
        ptr=(int*)realloc(ptr,k*sizeof(int));
        for(i=0;i<k;i++)
            printf("\n%i", ptr[i]);
	}
    free(ptr);    
    
    return 0;
}