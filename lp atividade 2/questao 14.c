#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration------------
    int number;
    int par = 0;
    int imp = 0;
    int impcount = 0;
    int parcount = 0;
//--------------------------------
    do
    {printf("DIGITE UM VALOR NEGATIVO PARA ITERROMPER O PROGRAMA\n\n");
        printf("digite um número: ");
        scanf("%i", &number);
        if (number > 0 && number % 2 == 0)
        {
            par+=number;
            parcount++;
        } else if (number > 0 && number % 2 != 0){
            imp+= number;
            impcount++;
        }
        system("cls || clear");
    } while (number >= 0);
    system("cls || clear");
printf("par: %i",parcount);
printf("\nimpar: %i",impcount);
printf("\npar: %i",par/parcount);
printf("\nimpar: %i",imp/impcount);
    return 0;
}