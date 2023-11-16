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
    int number[5];
    int par = 0;
    int imp = 0;
    int count = 0;
    int max = 0;
    int min = 999;
    int positive = 0;
    int negative = 0;
    int plus = 0;
    int i;
//--------------------------------
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %i� n�mero: ", i + 1);
        scanf("%i", &number[i]);
        count++;
        if (number[i] >= 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
        if (number[i] % 2 == 0)
        {
            par++;
            plus += number[i];
        }
        else
        {
            imp++;
        }
        if (number[i] < min)
        {
            min = number[i];
        }
        if (number[i] > max)
        {
            max = number[i];
        }
        system("cls || clear");
    }
    printf("quantidade de n�meros pares: %i", par);
    printf("\nquantidade de n�meros impares: %i", imp);
    printf("\nn�meros pares digitados: ");
    for (i = 0; i < 5; i++)
    {
        if (number[i] % 2 == 0)
        {
            printf("%i,", number[i]);
        }
    }
    printf("\nn�meros impares digitados: ");
    for (i = 0; i < 5; i++)
    {
        if (number[i] % 2 != 0)
        {
            printf("%i,", number[i]);
        }
    }
    printf("\n\nquantidade de n�meros positivos: %i", positive);
    printf("\nquantidade de n�meros negativos: %i", negative);
    printf("\nn�meros positivos digitados: ");
    for (i = 0; i < 5; i++)
    {
        if (number[i] >= 0)
        {
            printf("%i,", number[i]);
        }
    }
    printf("\nn�meros negativos digitados: ");
    for (i = 0; i < 5; i++)
    {
        if (number[i] < 0)
        {
            printf("%i,", number[i]);
        }
    }
    printf("\n\nquantidade de n�meros inseridos: %i", count);
    printf("\nn�meros inseridos: ");
    for (i = 0; i < 5; i++)
    {
        printf("%i,", number[i]);
    }
    printf("\n\nmaior n�mero: %i", max);
    printf("\nmenor n�mero: %i", min);
    printf("\n\nmedia dos pares: %i", plus / par);
    return 0;
}