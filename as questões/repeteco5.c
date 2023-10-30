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
        printf("ATENÇÃO ÚSUARIO, PARA ENCERRAR O PROGRAMA DIGITE UM NÚMERO NEGATIVO\n\n");
        printf("digite um número: ");
        scanf("%i", &number);
        if (number > 0)
        {
            plus += number;
            count++;
        }
        system("cls || clear");
    } while (number > 0);
    result = plus / count;
    printf("\nquantidade de números digitados: %i", count);
    printf("\nsoma dos números digitados: %i", plus);
    printf("\nmédia geral dos números digitados: %.1f", result);
    return 0;
}