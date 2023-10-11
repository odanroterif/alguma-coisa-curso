#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//---------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
// variable declaration-------
    int i;
    int number;
    int par = 0;
    int impar = 0;
//---------------------------
    for (i = 1; i <= 5; i++)
    {
        printf("digite o %iº número: ",i);
        scanf("%i",&number);
    if (number % 2 == 0)
    {
        par += 1; //par++ (acrescenta + 1)/par-- (retira - 1)
    }
    else
    {
        impar += 1; //impar++ <---alternativa
    }
    }
    printf("\n\npares: %i", par);
    printf("\nimpares: %i", impar);
    return 0;
}