#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//-------------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-----------
    int count = 0;
    int number;
    int plus = 0;
    float result;
//-------------------------------
    do
    {
        printf("ATEN��O �SUARIO, PARA ENCERRAR O PROGRAMA DIGITE UM N�MERO NEGATIVO\n\n");
        printf("digite um n�mero: ");
        scanf("%i", &number);
        if (number > 0)
        {
            plus += number;
            count++;
        }
        system("cls || clear");
    } while (number > 0);
    result = plus / count;
    printf("\nquantidade de n�meros digitados: %i", count);
    printf("\nsoma dos n�meros digitados: %i", plus);
    printf("\nm�dia geral dos n�meros digitados: %.1f", result);
    return 0;
}