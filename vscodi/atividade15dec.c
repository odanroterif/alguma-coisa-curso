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
    printf("digite um n�mero correspondente ao dia da semana: ");
    scanf("%i", &dia);
    switch (dia)
    {
    case 1:
        printf("\ndomingo, � um fim de semana.");
        break;
    case 2:
        printf("\nsegunda, � um dia �til da semana.");
        break;
    case 3:
        printf("\nter�a, � um dia �til da semana.");
        break;
    case 4:
        printf("\nquarta, � um dia �til da semana.");
        break;
    case 5:
        printf("\nquinta, � um dia �til da semana.");
        break;
    case 6:
        printf("\nsexta, � um dia �til da semana.");
        break;
    case 7:
        printf("\ns�bado, � um fim de semana.");
        break;
    default:
        printf("\nesse dia n�o existe...ainda.");
        break;
    }
    return 0;
}