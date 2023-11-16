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
    int number[6] = {0, 0, 0, 0, 0, 0};
    int counts[4] = {0, 0, 0, 0};
    int maxORmin[2] = {0, 999};
    int plus[3] = {0, 0, 0};
    float results[3];
    int i;
//--------------------------------
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %i� n�mero: ", i + 1);
        scanf("%i", &number[i]);
        number[5]++;
        plus[2] += number[i];
        if (number[i] >= 0)
        {
            counts[0]++;
        }
        else
        {
            counts[1]++;
        }
        if (number[i] % 2 == 0)
        {
            counts[2]++;
            plus[0] += number[i];
        }
        else
        {
            plus[1] += number[i];
            counts[3]++;
        }
        if (number[i] < maxORmin[1])
        {
            maxORmin[1] = number[i];
        }
        if (number[i] > maxORmin[0])
        {
            maxORmin[0] = number[i];
        }
        system("cls || clear");
    }
    printf("quantidade de n�meros pares: %i", counts[2]);
    printf("\nquantidade de n�meros impares: %i", counts[3]);
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
    printf("\n\nquantidade de n�meros positivos: %i", counts[0]);
    printf("\nquantidade de n�meros negativos: %i", counts[1]);
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
    printf("\n\nquantidade de n�meros inseridos: %i", number[5]);
    printf("\nn�meros inseridos: ");
    for (i = 4; i >= 0; i--)
    {
        printf("%i,", number[i]);
    }
    if (counts[2] > 0)
    {
    results[0] = plus[0] / counts[2];
    }
    if (counts[3] > 0)
    {
    results[1] = plus[1] / counts[3];
    }
    results[2] = plus[2] / number[5];
    printf("\n\nmaior n�mero: %i", maxORmin[0]);
    printf("\nmenor n�mero: %i", maxORmin[1]);
    printf("\n\nmedia dos pares: %.1f", results[0]);
    printf("\nmedia dos impares: %.1f", results[1]);
    printf("\nmedia geral: %.1f", results[2]);
    return 0;
}