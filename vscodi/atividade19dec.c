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
    int number;
    int finalnumber = 0; //= 0 <---evita que tenha algum número lixo ja inserido
    int i;
//----------------------------
    for (i = 1; i <= 5; i++)
    {
        printf("digite o %iº número: ",i);
        scanf("%i", &number);
        system("cls || flush");
        finalnumber = finalnumber + number; //finalnumber += number <----forma alternativa
    }
    printf("\nresultado: %i",finalnumber);
    return 0;
}