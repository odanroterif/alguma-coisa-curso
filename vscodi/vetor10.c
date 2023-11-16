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
        printf("Digite o %iº número: ", i + 1);
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
    printf("quantidade de números pares: %i", par);
    printf("\nquantidade de números impares: %i", imp);
    printf("\nnúmeros pares digitados: ");
    for (i = 0; i < 5; i++)
    {
        if (number[i] % 2 == 0)
        {
            printf("%i,", number[i]);
        }
    }
    printf("\nnúmeros impares digitados: ");
    for (i = 0; i < 5; i++)
    {
        if (number[i] % 2 != 0)
        {
            printf("%i,", number[i]);
        }
    }
    printf("\n\nquantidade de números positivos: %i", positive);
    printf("\nquantidade de números negativos: %i", negative);
    printf("\nnúmeros positivos digitados: ");
    for (i = 0; i < 5; i++)
    {
        if (number[i] >= 0)
        {
            printf("%i,", number[i]);
        }
    }
    printf("\nnúmeros negativos digitados: ");
    for (i = 0; i < 5; i++)
    {
        if (number[i] < 0)
        {
            printf("%i,", number[i]);
        }
    }
    printf("\n\nquantidade de números inseridos: %i", count);
    printf("\nnúmeros inseridos: ");
    for (i = 0; i < 5; i++)
    {
        printf("%i,", number[i]);
    }
    printf("\n\nmaior número: %i", max);
    printf("\nmenor número: %i", min);
    printf("\n\nmedia dos pares: %i", plus / par);
    return 0;
}