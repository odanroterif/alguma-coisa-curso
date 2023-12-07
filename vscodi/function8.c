#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
void thefunction()
{
    printf("\n======================\n");
    printf("\tTAREFA");
    printf("\n======================\n");
}
float plus(float n[])
{
    int i;
    float math = 0;

    for (i = 0; i < 2; i++)
    {
        math += n[i];
    }

    return math;
}
float minus(float n[])
{
    float results;

    results = n[0] - n[1];
    return results;
}
float multi(float n[])
{
    float results;

    results = n[0] * n[1];
    return results;
}
float division(float n[])
{
    float results;

    results = n[0] / n[1];
    return results;
}
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-------------
    float number[2];
    char option;
//---------------------------------
    thefunction();
    printf("digite um número: ");
    scanf("%f", &number[0]);
    printf("\ndigite outro número: ");
    scanf("%f", &number[1]);
    system("cls || clear");
    fflush(stdin);
    do
    {
        printf("soma(+),subtração(-),divisão(/),multiplicação(x)");
        printf("\nque operação quer fazer com eles?: ");
        scanf("%c", &option);
        switch (option)
        {
        case '+':
            printf("\n\nresultado: %.1f", plus(number));
            break;
        case '-':
            printf("\n\nresultado: %.1f", minus(number));
            break;
        case 'x':
            printf("\n\nresultado: %.1f", multi(number));
            break;
        case '/':
            printf("\n\nresultado: %.1f", division(number));
            break;

        default:
            system("cls || clear");
            printf("ESSA OPERAÇÃO AINDA NÃO EXISTE\n\n");
            break;
        }
    } while (option != '+' && option != '-' && option != 'x' && option != '/');

    return 0;
}