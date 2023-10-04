#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
// variable declaration----
    int dia;
//------------------------
    printf("digite um número correspondente ao dia da semana: ");
    scanf("%i", &dia);
    switch (dia)
    {
    case 1:
        printf("\ndomingo, é um fim de semana.");
        break;
    case 2:
        printf("\nsegunda, é um dia útil da semana.");
        break;
    case 3:
        printf("\nterça, é um dia útil da semana.");
        break;
    case 4:
        printf("\nquarta, é um dia útil da semana.");
        break;
    case 5:
        printf("\nquinta, é um dia útil da semana.");
        break;
    case 6:
        printf("\nsexta, é um dia útil da semana.");
        break;
    case 7:
        printf("\nsábado, é um fim de semana.");
        break;
    default:
        printf("\nesse dia não existe...ainda.");
        break;
    }
    return 0;
}